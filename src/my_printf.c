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

void function_test(const char *format, va_list ap, int i)
{
    function_mini(format, ap, i + 1);
    function_base(format, ap, i + 1);
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            function_test(format, ap, i);
            i += 2;
            continue;
        }
        my_putchar(format[i]);
        i++;
    }
    va_end(ap);
    return 0;
}
