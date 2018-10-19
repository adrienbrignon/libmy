/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_isprintable unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_isprintable)
{
    cr_assert_eq(my_str_isprintable(""), 0);
    cr_assert_eq(my_str_isprintable(" "), 1);
    cr_assert_eq(my_str_isprintable("\n"), 1);
    cr_assert_eq(my_str_isprintable("abc"), 1);
    cr_assert_eq(my_str_isprintable("123"), 1);
    cr_assert_eq(my_str_isprintable("abc 123"), 1);
}
