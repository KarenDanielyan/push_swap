NAME		=	push_swap

BONUS		=	checker

INCLUDE		=	./include

BUILD		=	./build

SRC			=	./src

SRC_B		=	./src_b

DEP			=	$(wildcard include/*.h) Makefile

SOURCES		=	$(wildcard $(SRC)/*.c)

SOURCES_B	=	$(wildcard $(SRC_B)/*.c)

OBJS		=	$(patsubst $(SRC)/%.c, $(BUILD)/%.o, $(SOURCES))

OBJS_B		=	$(patsubst $(SRC_B)/%.c, $(BUILD)/%.o, $(SOURCES_B))

CC 			= 	cc

RM			=	rm -rf

CFLAGS		=	-g3 -Wall -Wextra -Werror

LFLAGS		=	-L./libft -lft -L./printf -lftprintf

IFLAGS		=	-I./include -I./libft -I./printf/include

$(BUILD)/%.o: $(SRC)/%.c $(DEP)
				@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(BUILD)/%.o: $(SRC_B)/%.c $(DEP)
				@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

all:		$(NAME)

$(BUILD):
				@mkdir $(BUILD)

$(NAME):	$(BUILD) $(OBJS)
				@echo	"Building ..."
				@$(MAKE) -C libft
				@$(MAKE) -C printf
				@$(CC) $(CFLAGS) $(OBJS) $(IFLAGS) $(LFLAGS) -o $(NAME)
				@echo	"Build Successfull."

$(BONUS):	$(BUILD) $(OBJS_B)
				@echo "Building checker ..."
				@$(MAKE) -C libft
				@$(MAKE) -C printf
				@$(CC) $(CFLAGS) $(OBJS_B) $(IFLAGS) $(LFLAGS) -o $(BONUS)
				@echo "Build Successfull."
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

bonus:		$(BONUS)

run:		$(NAME)
			@echo "Is Sorted?:"
			@$(eval ARG=$(ruby -e "puts (1..100).to_a.shuffle.join(' ')"))
			@$(eval ./push_swap $ARG | ./checker_Mac $ARG)
			@echo "Instructions:"
			@$(eval ./push_swap $ARG | wc -l)

.PHONY:		all bonus clean fclean re
