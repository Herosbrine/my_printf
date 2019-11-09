/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_printf2.c
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

int my_printf2(int i, char const * format, ...)
{
    while (format[i] == '%') {
        i++;
        if (format[i] != '%')
            my_putchar('%');
        while (format[i] != '\0') {
            my_putchar(format[i]);
            i++;
        }
        exit( EXIT_SUCCESS );
    }
    while (format[i] >= '0' && format[i] <= '9') {
        my_put_space(i, format);
        i++;
    }
    while (format[i] == ' ') {
        my_putchar(' ');
        i++;
    }
    return (0);
}