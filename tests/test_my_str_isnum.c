/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_isnum unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_isnum)
{
    cr_assert_eq(my_str_isnum(""), 0);
    cr_assert_eq(my_str_isnum("A"), 0);
    cr_assert_eq(my_str_isnum("1"), 1);
    cr_assert_eq(my_str_isnum("abc"), 0);
    cr_assert_eq(my_str_isnum("ABC"), 0);
    cr_assert_eq(my_str_isnum("123"), 1);
    cr_assert_eq(my_str_isnum("abc 123"), 0);
}
