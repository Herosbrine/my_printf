##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc -c

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
		$(SRC_DIR)my_put_hexa.c \
		$(SRC_DIR)my_put_octal.c \
		$(SRC_DIR)my_put_nbr2.c  \
		$(SRC_DIR)my_put_space.c

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