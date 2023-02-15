NAME		=	push_swap

INCLUDE		=	./include

BUILD		=	./build

SRC			=	./src

DEP			=	Makefile

SOURCES		=	$(wildcard $(SRC)/*.c)

OBJS		=	$(patsubst $(SRC)/%.c, $(BUILD)/%.o, $(SOURCES))

CC 			= 	cc

RM			=	rm -rf

CFLAGS		=	-Wall -Wextra -Werror

LFLAGS		=	-L./libft -lft -L./printf -lftprintf

IFLAGS		=	-I./include -I./libft -I./printf/include

$(BUILD)/%.o: $(SRC)/%.c $(DEP)
				@$(CC) $(CFLAGS) $(IFLAGS) $(LFLAGS) -c $< -o $@

all:		$(NAME)

$(BUILD):
				@mkdir $(BUILD)

$(NAME):	$(BUILD) $(OBJS)
				@echo	"Building ..."
				@$(MAKE) -C libft
				@$(MAKE) -C printf
				@$(CC) $(CFAGS) $(OBJS) $(IFLAGS) $(LFLAGS) -o $(NAME)
				@echo	"Build Successfull."
clean:
				@echo "Cleaning Build..."
				@$(RM) $(OBJS)
				@$(RM) $(BUILD)
				@$(MAKE) clean -C libft
				@$(MAKE) clean -C printf
				@echo "Done."

fclean:		clean
				@echo "Cleaning Everyting..."
				@$(MAKE) fclean -C libft
				@$(MAKE) fclean -C printf
				@$(RM) $(NAME)
				@echo "Done."

re:			fclean $(NAME)

.PHONY run:
			@./push_swap

.PHONY:		all bonus clean fclean re
