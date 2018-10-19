/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isnum unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_isalphanum)
{
    cr_assert_eq(my_isalphanum(' '), 0);
    cr_assert_eq(my_isalphanum('@'), 0);
    cr_assert_eq(my_isalphanum('A'), 1);
    cr_assert_eq(my_isalphanum('a'), 1);
    cr_assert_eq(my_isalphanum('1'), 1);
    cr_assert_eq(my_isalphanum('0'), 1);
}
