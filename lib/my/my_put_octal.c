/*
** EPITECH PROJECT, 2026
** my_put_nbr
** File description:
** true nomber
*/

#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"
int my_put_octal(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 8)
        my_put_octal(nb / 8);
    my_putchar(48 + (nb % 8));
    return 0;
}
