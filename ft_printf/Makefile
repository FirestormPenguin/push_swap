# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 15:28:10 by egiubell          #+#    #+#              #
#    Updated: 2023/02/15 16:52:47 by egiubell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRC		= ft_printf.c ft_putstr.c ft_puthex.c ft_putptr.c ft_putnbr.c ft_putunsign.c

FLAGS	= -Wall -Werror -Wextra -I -g
CC		= gcc
OBJ		= $(SRC:.c=.o)

.o:.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
$(NAME):	${OBJ}
	@make -C libft libft.a
	@cp libft/libft.a ./libftprintf.a
	@ar rcs $(NAME) $(OBJ)
all:	$(NAME)

clean:
	@rm -f $(OBJ)
	@make fclean -C libft
fclean:	clean
	@rm -f $(NAME)
re:	fclean all

.PHONY:		all, clean, fclean, re
