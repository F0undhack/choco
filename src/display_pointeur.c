/*
** EPITECH PROJECT, 2026
** pointeur
** File description:
** affichage pointeurs
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

void my_pointeur(void *ptr)
{
    unsigned long nb = (unsigned long)ptr;

    my_putstr("0x");
    my_hexa_min(nb);
}
