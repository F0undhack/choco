/*
** EPITECH PROJECT, 2026
** my_put_nbr
** File description:
** true nomber
*/

#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"
int my_put_nb(unsigned int nb)
{
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar(48 + (nb % 10));
    return 0;
}
