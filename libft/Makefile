NAME		=	libft.a

DEP			= 	libft.h Makefile

SOURCES		=	$(shell find . -maxdepth 1 -name '*.c' ! -name 'ft_lst*.c')

CC 			= 	cc

BONUS		=	$(shell find . -maxdepth 1 -name 'ft_lst*.c')

FILTER		=	$(filter-out $(BONUS), $(SOURCES))
				
OBJS		=	$(FILTER:.c=.o)

OBJS_B		=	$(BONUS:.c=.o)

RM			=	rm -f

CFLAGS		=	-g3 -Wall -Wextra -Werror

AR			=	ar rcs

%.o: %.c $(DEP)
				@$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
				@$(AR) $(NAME) $(OBJS)

bonus:		$(OBJS) $(OBJS_B)
				$(AR) $(NAME) $(OBJS) $(OBJS_B)

clean:		
				@$(RM) $(OBJS) $(OBJS_B)

fclean:		clean
				@$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all bonus clean fclean re