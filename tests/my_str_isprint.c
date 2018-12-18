/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_isprintable unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_isprint)
{
    cr_assert_eq(my_str_isprint(""), 0);
    cr_assert_eq(my_str_isprint(" "), 1);
    cr_assert_eq(my_str_isprint("\n"), 0);
    cr_assert_eq(my_str_isprint("abc"), 1);
    cr_assert_eq(my_str_isprint("123"), 1);
    cr_assert_eq(my_str_isprint("abc 123"), 1);
    cr_assert_eq(my_str_isprint("\a"), 0);
}
