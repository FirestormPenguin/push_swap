NAME	=	push_swap

SRCS	=	push_swap.c utils.c sort_small_stack.c sort_big_stack.c checks.c operation/swap.c operation/push.c operation/rotate.c operation/r_rotate.c

OBJS	=	$(SRCS:.c=.o)

CCFLAGS	=	gcc -Wall -Wextra -Werror -g
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
