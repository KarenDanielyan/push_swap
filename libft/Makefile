NAME		=	libft.a

DEP			= 	libft.h Makefile

SOURCES		=	$(shell find . -maxdepth 1 -name '*.c')

CC 			= 	cc

BONUS		=	$(shell find . -maxdepth 1 -name 'ft_lst*.c')

FILTER		=	$(filter-out $(BONUS), $(SOURCES))
				
OBJS		=	$(FILTER:.c=.o)

OBJS_B		=	$(SOURCES:.c=.o)

TO_BUILD	=	$(if $(filter bonus, $(MAKECMDGOALS)), $(OBJS_B), $(OBJS))

RM			=	rm -f

CFLAGS		=	-g3 -Wall -Wextra -Werror

AR			=	ar rcs

%.o: %.c $(DEP)
				@$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(TO_BUILD)
				@$(AR) $(NAME) $(TO_BUILD)
				@echo Done.

bonus:		$(NAME)

clean:		
				@$(RM) $(OBJS) $(OBJS_B)

fclean:		clean
				@$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all bonus clean fclean re