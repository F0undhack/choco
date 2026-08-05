/*
** EPITECH PROJECT, 2026
** my_printf
** File description:
** Reproduction de printf
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../include/my.h"

void function_mini(const char *format, va_list ap, int i)
{
    if (format[i] == 'd' || format[i] == 'i') {
        my_put_nbr(va_arg(ap, int));
    }
    if (format[i] == 'c') {
        my_putchar(va_arg(ap, int));
    }
    if (format[i] == 's') {
        my_putstr(va_arg(ap, char *));
    }
    if (format[i] == '%') {
        my_putchar('%');
    }
    if (format[i] == 'u') {
        my_put_nb(va_arg(ap, int));
    }
}
