/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** flag.c
*/
#include <stdarg.h>
#include "my.h"

int my_flag(int i, va_list paramsinfos, char const * format, ...)
{
    if (format[i] == 's') {
        const char * string = (const char *) va_arg( paramsinfos, const char * );
        for (int j = 0; string[j] != '\0'; j++)
            my_putchar(string[j]);
    }
    if (format[i] == 'c') { 
        const char *str = (const char *) va_arg( paramsinfos, const char * );
        for (int j = 0; str[j]; j++)
            my_putchar(str[j]);
    }
    if (format[i] == 'd')
          my_put_nbr(va_arg(paramsinfos, int));
    if (format[i] == 'i')
          my_put_nbr(va_arg(paramsinfos, int));
    if (format[i] == 'u')
        my_put_nbr2(va_arg(paramsinfos, unsigned int));
    return (0);
}