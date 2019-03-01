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
    cr_assert_eq(6, my_printf("Hello "));
    cr_assert_eq(2, my_printf("%d", 42));
    cr_assert_eq(5, my_printf(" %s", "cars"));
    cr_assert_eq(7, my_printf(" %i mph", 21 * 2));
    cr_assert_eq(2, my_printf("%."));
    cr_assert_eq(0, my_printf(""));
    cr_assert_stdout_eq_str("Hello 42 cars 42 mph%.");
}
