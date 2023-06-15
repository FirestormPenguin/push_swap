# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 13:01:43 by marvin            #+#    #+#              #
#    Updated: 2023/06/15 13:54:50 by egiubell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	push_swap.c utils.c sort_stack.c sort_big_stack.c \
			sort_big_stack2.c checks.c operation/swap.c operation/push.c \
			operation/rotate.c operation/r_rotate.c \
			./mini-libft/ft_atoi.c ./mini-libft/ft_split.c ./mini-libft/ft_strcmp.c \
			./mini-libft/ft_substr.c ./mini-libft/ft_strlcpy.c  ./mini-libft/ft_strlen.c  \
			./ft_printf/ft_printf.c ./ft_printf/ft_printf_utils.c

OBJS	=	$(SRCS:.c=.o)

CCFLAGS	=	gcc -Wall -Wextra -Werror
RM		=	rm -f
LIBRARY	= -I ./ft_printf/ft_printf.h

.o: .c
	$(CCFLAGS) $(SRCS) -c $< -o  ${<:.c=.o}

$(NAME):	$(OBJS)
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
