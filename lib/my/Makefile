##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC =	my_putchar.c \
		my_putstr.c \
		my_put_nbr.c \
		my_revstr.c \
		my_strlen.c \

OBJ	=	$(SRC:.c=.o)

NAME = 	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all