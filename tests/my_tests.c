/*
** EPITECH PROJECT, 2026
** my_ls
** File description:
** unit tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include "../include/my.h"

static void redirect_stdout(void)
{
    cr_redirect_stdout();
}

Test(my_putstr, basic, .init = redirect_stdout)
{
    my_putstr("hello");
    cr_assert_stdout_eq_str("hello");
}

Test(my_putchar, basic, .init = redirect_stdout)
{
    my_putchar('A');
    cr_assert_stdout_eq_str("A");
}

Test(my_put_nbr, positive_number, .init = redirect_stdout)
{
    my_put_nbr(42);
    cr_assert_stdout_eq_str("42");
}

Test(my_put_nbr, negative_number, .init = redirect_stdout)
{
    my_put_nbr(-7);
    cr_assert_stdout_eq_str("-7");
}

Test(my_put_octal, basic, .init = redirect_stdout)
{
    my_put_octal(8);
    cr_assert_stdout_eq_str("10");
}