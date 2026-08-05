/*
** EPITECH PROJECT, 2026
** my_putstr
** File description:
** pointeurs
*/
#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
