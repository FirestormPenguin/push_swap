NAME	=	push_swap

SRCS	=	push_swap.c

OBJS	=	$(SRCS:.c=.o)

CCFLAGS	=	gcc -Wall -Wextra -Werror
RM		=	rm -f

$(NAME): 
	$(CCFLAGS) $(SRCS) -o $(NAME)

all:	$(NAME)

clean:
			$(RM) $(OBJS)
fclean:	clean
			$(RM) $(NAME)
re:		fclean all
.PHONY: all clean fclean re
