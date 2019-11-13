/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

int my_printf(char const * format, ...)
{
    va_list(paramsinfos);
    va_start(paramsinfos, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            my_printf2(&i, paramsinfos, format);
        }
        else {
            my_putchar(format[i]);
        }
    }
    return (0);
}
int main()
{
  my_printf("hello world % d et % X et % s"\
    " et % c et % u et % o et % i", 14, 14, "14", "g", 4000000000, 14, 14);
}