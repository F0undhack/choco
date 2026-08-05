/*
** EPITECH PROJECT, 2026
** la fonction de conversion
** File description:
** conversion
*/

#include <unistd.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../include/my.h"

void function_base(const char *format, va_list ap, int i)
{
    if (format[i] == 'o') {
        my_put_octal(va_arg(ap, int));
    }
    if (format[i] == 'X') {
        my_hexa_maj(va_arg(ap, int));
    }
    if (format[i] == 'x') {
        my_hexa_min(va_arg(ap, int));
    }
    if (format[i] == 'p') {
        my_pointeur(va_arg(ap, void *));
    }
    if (format[i] == 'f') {
        my_put_float(va_arg(ap, double));
    }
}
