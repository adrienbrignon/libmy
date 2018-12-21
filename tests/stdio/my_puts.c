/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_puts unit test.
*/

#include "tests.h"
#include "my_stdio.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(unit, my_puts, .init = redirect_all_std)
{
    int printed = my_puts("Hello world!");

    cr_assert_eq(printed, 13);
    cr_assert_stdout_eq_str("Hello world!\n");
}
