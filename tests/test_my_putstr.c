/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_putstr unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/redirect.h>
#include <criterion/criterion.h>

Test(unit, my_putstr, .init = redirect_all_std)
{
    my_putstr("Hello world!");

    cr_assert_stdout_eq_str("Hello world!");
}
