##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc -g3 -c

RM	=	 rm -rf

CFLAGS = -W -Wall -Wextra

SRC =	my_putchar.c 	\
		my_putstr.c 	\
		my_put_nbr.c 	\
		my_revstr.c 	\
		my_strlen.c 	\
		my_printf.c 	\
		flag.c		\
		my_getnbr.c 	\
		my_put_hexa.c \
		my_put_octal.c \
		my_put_nbr2.c  \
		my_put_space.c \
		my_printf2.c

OBJ	=	$(SRC:.c=.o)

NAME = 	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

tests run:
	$(MAKE)
	gcc -o unit_test lib/my/my_printf.c tests/test_myprintf.c libmy.a --coverage -lcriterion
	./unit_test
	gcov test_myprintf.gcda
	gcovr --exclude "test_*"
	$(MAKE) fclean

clean:
	rm -f *.o
	rm -f *.g*
	rm -f unit_test

fclean: clean
	rm -f $(NAME)

re:	fclean all