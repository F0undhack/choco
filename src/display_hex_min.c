/*
** EPITECH PROJECT, 2026
** Hexadecimal
** File description:
** hex
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

void my_hexa_min(unsigned int nb)
{
    char *Hex = "0123456789abcdef";

    if (nb >= 16) {
        my_hexa_min(nb / 16);
    }
    my_putchar(Hex[nb % 16]);
}
