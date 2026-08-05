/*
** EPITECH PROJECT, 2026
** my.h
** File description:
** the coding my
*/

#ifndef MY_H
    #define MY_H
    #include <stdarg.h>
    #include <dirent.h>

void my_putchar(char c);
void display_entries(DIR *dir, int flag_a);
void my_ls(char *path, int flag_a, int flag_d);
int my_put_octal(int nb);
int my_put_nbr(int nb);
void my_pointeur(void *ptr);
void my_hexa_maj(unsigned int nb);
void my_hexa_min(unsigned int nb);
int my_put_nb(unsigned int nb);
void function_test(const char *format, va_list ap, int i);
int my_putstr(char const *str);
int my_strlen(char const *str);
void function_mini(const char *format, va_list ap, int i);
void function_base(const char *format, va_list ap, int i);
void my_put_float(double nb);
int my_put_nbr(int nb);
int my_printf(const char *format, ...);
#endif
