/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_putchar unit test.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "my_stdio.h"

static void redirect_std(void)
{
    cr_redirect_stdout();
}

Test(stdio, my_putchar, .init = redirect_std)
{
    int printed = my_putchar('@');

    cr_assert_eq(printed, 1);
    cr_assert_stdout_eq_str("@");
}
