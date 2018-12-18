/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_putstr unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(unit, my_putstr, .init = redirect_all_std)
{
    int printed = my_putstr("Hello world!");

    cr_assert_eq(printed, 12);
    cr_assert_stdout_eq_str("Hello world!");
}
