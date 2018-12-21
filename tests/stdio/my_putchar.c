/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_putchar unit test.
*/

#include "tests.h"
#include "my_stdio.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(unit, my_putchar, .init = redirect_all_std)
{
    int printed = my_putchar('@');

    cr_assert_eq(printed, 1);
    cr_assert_stdout_eq_str("@");
}
