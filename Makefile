##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc -g3 -c

RM	=	 rm -rf

CFLAGS = -W -Wall -Wextra

SRC_DIR = ./lib/my/

SRC =	$(SRC_DIR)my_putchar.c 	\
		$(SRC_DIR)my_putstr.c 	\
		$(SRC_DIR)my_put_nbr.c 	\
		$(SRC_DIR)my_revstr.c 	\
		$(SRC_DIR)my_strlen.c 	\
		$(SRC_DIR)my_printf.c 	\
		$(SRC_DIR)flag.c		\
		$(SRC_DIR)my_getnbr.c 	\
		$(SRC_DIR)my_put_hexa_max.c \
		$(SRC_DIR)my_put_octal.c \
		$(SRC_DIR)my_put_nbr2.c  \
		$(SRC_DIR)my_put_space.c \
		$(SRC_DIR)my_printf2.c	 \
		$(SRC_DIR)my_put_hexa_min.c \
		$(SRC_DIR)my_put_binary.c

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