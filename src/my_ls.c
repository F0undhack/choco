/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** coding ls function for the flags
*/
#include "../include/my.h"
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

void display_entries(DIR *dir, int flag_a)
{
    struct dirent *entry;

    entry = readdir(dir);
    while (entry != NULL) {
        if (flag_a == 1 || entry->d_name[0] != '.')
            my_printf("%s ", entry->d_name);
        entry = readdir(dir);
    }
    my_printf("\n");
}

void my_ls(char *path, int flag_a, int flag_d)
{
    DIR *dir;

    if (flag_d == 1) {
        my_printf("%s\n", path);
        return;
    }
    dir = opendir(path);
    if (dir == NULL) {
        my_printf("Erreur: %s\n", path);
        return;
    }
    display_entries(dir, flag_a);
    closedir(dir);
}

int main(int ac, char **av)
{
    int flag_a = 0;
    int flag_d = 0;
    char *path = ".";
    char *arg;

    for (int i = 1; i < ac; i++) {
        arg = av[i];
        if (arg[0] != '-') {
            path = arg;
            continue;
        }
        if (arg[1] == 'a')
            flag_a = 1;
        if (arg[1] == 'd')
            flag_d = 1;
    }
    my_ls(path, flag_a, flag_d);
    return 0;
}
