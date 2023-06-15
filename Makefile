# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 13:01:43 by marvin            #+#    #+#              #
#    Updated: 2023/06/15 13:01:43 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	push_swap.c utils.c sort_stack.c sort_big_stack.c sort_big_stack2.c checks.c operation/swap.c operation/push.c operation/rotate.c operation/r_rotate.c

OBJS	=	$(SRCS:.c=.o)

CCFLAGS	=	gcc -Wall -Wextra -Werror
RM		=	rm -f
MINI_LIBFT = ./mini-libft
LIBRARY	= -I ./mini-libft/libft.h

.o: .c
	$(CCFLAGS) $(SRCS) -c $< -o  ${<:.c=.o}

$(NAME):	$(OBJS)
	make -C $(MINI_LIBFT)
	$(CCFLAGS) $(OBJS) $(LIBRARY) -o $(NAME)

all:	$(NAME)

clean:
		make clean -C $(MINI_LIBFT)
		$(RM) $(OBJS)

fclean:	clean
		make fclean -C $(MINI_LIBFT)
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
