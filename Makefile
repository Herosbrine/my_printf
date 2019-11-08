##
## EPITECH PROJECT, 2019
## undefined
## File description:
## Makefile
##

CC	=	gcc -c

RM	=	 rm -rf

NAME =	 a.out

CFLAGS = -W -Wall -Wextra -I./include

SRC_DIR = ./PSU_my_printf_2019

SRCS =	include/flag.c				\
		lib/my/my_putchar.c			\
		lib/my/my_getnbr.c			\
		lib/my/my_putstr.c			\
		lib/my/my_strlen.c			\
		lib/my/my_revstr.c			\
		lib/my/my_put_nbr.c			\
		lib/my/my_put_nbr2.c		\
		my_printf.c 				\


OBJS =	 $(SRCS:.c=.o)

all :	 $(NAME)

$(NAME):	$(OBJS)
		gcc $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)


re : fclean all