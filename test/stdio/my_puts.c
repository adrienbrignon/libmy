/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_puts unit test.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "my_stdio.h"

static void redirect_std(void)
{
    cr_redirect_stdout();
}

Test(stdio, my_puts, .init = redirect_std)
{
    cr_assert_eq(my_puts("Hello world!"), 13);
    cr_assert_stdout_eq_str("Hello world!\n");
}
