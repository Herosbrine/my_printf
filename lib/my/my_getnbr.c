/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** my_getnbr.c
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

int my_getnbr(const char *str)
{
    int i = 0;
    long nb = 0;
    int neg = 0;
    
    if (str[i] == 0)
        return (0);
    if (str[i] == '-') {
        neg = 1;
        i++;
    }
    if (nb > 2147483647 || nb < -2147483647) {
        return (0);
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] > '9' || str[i] < '0') {
            if (neg == 1)
                nb = -nb;
            return (nb);
        }
        nb = nb * 10 + (str[i]) - 48;
    }
    return (nb);
}