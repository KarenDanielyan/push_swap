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

MGOALS		=	$(if $(filter bonus, $(MAKECMDGOALS)), $(patsubst bonus, all, $(MAKECMDGOALS)), $(MAKECMDGOALS))

$(BUILD)/%.o: $(SRC)/%.c $(DEP)
				@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(BUILD)/%.o: $(SRC_B)/%.c $(DEP)
				@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

all:		libft printf $(NAME)

$(BUILD):
				@mkdir -p $(BUILD)

$(NAME):	$(BUILD) $(OBJS)
				@echo	"Building ..."
				@$(CC) $(CFLAGS) $(OBJS) $(IFLAGS) $(LFLAGS) -o $(NAME)
				@echo	"Build Successfull."

$(BONUS):	$(BUILD) $(OBJS_B)
				@echo "Building checker ..."
				@$(CC) $(CFLAGS) $(OBJS_B) $(IFLAGS) $(LFLAGS) -o $(BONUS)
				@echo "Build Successfull."

libft:
				@$(MAKE) $(MGOALS) -C libft

printf:
				@$(MAKE) $(MGOALS) -C printf

clean:			libft printf
				@echo "Cleaning Build..."
				@$(RM) $(BUILD)
				@echo "Done."

fclean:		libft printf clean
				@echo "Cleaning Everyting..."
				@$(RM) $(NAME)
				@$(RM) $(BONUS)
				@echo "Done."

re:			fclean $(NAME)

bonus:		libft printf $(BONUS)

.PHONY:		all bonus clean fclean re libft printf
