/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_put_octal.c
*/
#include "../../include/my.h"

int my_put_octal(int nbr)
{
    long octalnbr = 0, i = 1;
    int remainder;

    while (nbr != 0) {
        remainder = nbr % 8;
        nbr = nbr / 8;
        octalnbr = octalnbr + (remainder * i);
        i = i * 10;
    }
    my_put_nbr(octalnbr);
    return (0);
}