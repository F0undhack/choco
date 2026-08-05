/*
** EPITECH PROJECT, 2026
** my printf
** File description:
** float
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "../include/my.h"

void my_put_float(double nb)
{
    int x = 0;
    int dec;
    double pd;
    int pe = (int)nb;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    pd = nb - pe;
    my_put_nbr(pe);
    my_putchar('.');
    pd = pd + 0.0000005;
    while (x < 6) {
        pd = pd * 10;
        dec = (int)pd;
        my_putchar(dec % 10 + '0');
        x++;
    }
}
