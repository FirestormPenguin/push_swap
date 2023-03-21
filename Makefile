NAME	= push_swap.a
SRC		= push_swap.c

FLAGS	= -Wall -Werror -Wextra -I -g
CC		= gcc
OBJ		= $(SRC:.c=.o)

.o:.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
$(NAME):	${OBJ}
	@ar -r $(NAME) $(OBJ)
all:	$(NAME)

clean:
	@rm -f $(OBJ)
fclean:	clean
	@rm -f $(NAME)
re:	fclean all

.PHONY:		all, clean, fclean, re