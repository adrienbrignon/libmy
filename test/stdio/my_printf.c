/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_printf unit test.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "my_stdio.h"

static void redirect_std(void)
{
    cr_redirect_stdout();
}

Test(stdio, my_printf, .init = redirect_std)
{
    cr_assert_eq(my_printf("Hello "), 6);
    cr_assert_eq(my_printf("%d", 42), 2);
    cr_assert_eq(my_printf(" %s", "cars"), 5);
    cr_assert_eq(my_printf(" %i mp", 42), 6);
    cr_assert_eq(my_printf("%c", 'h'), 1);
    cr_assert_eq(my_printf(""), 0);
    cr_assert_eq(my_printf("%c", '\n'), 1);
    cr_assert_stdout_eq_str("Hello 42 cars 42 mph\n");
}
