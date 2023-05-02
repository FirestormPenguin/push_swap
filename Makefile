NAME	=	push_swap

SRCS	=	push_swap.c utils.c sort_stack.c sort_big_stack.c checks.c operation/swap.c operation/push.c operation/rotate.c operation/r_rotate.c

OBJS	=	$(SRCS:.c=.o)

CCFLAGS	=	gcc -Wall -Wextra -Werror
RM		=	rm -f
FT_PRINTF = ft_printf
LIBRARY := ft_printf/libft/libft.a ft_printf/libftprintf.a

.o: .c
	$(CCFLAGS) $(SRCS) -c $< -o  ${<:.c=.o}

$(NAME):	$(OBJS)
	make -C $(FT_PRINTF)
	$(CCFLAGS) $(OBJS) $(LIBRARY) -o $(NAME)

all:	$(NAME)

clean:
		make clean -C $(FT_PRINTF)
		$(RM) $(OBJS)

fclean:	clean
		make fclean -C $(FT_PRINTF)
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
