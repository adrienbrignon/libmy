/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_isalpha unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_isalpha)
{
    cr_assert_eq(my_str_isalpha(""), 0);
    cr_assert_eq(my_str_isalpha("A"), 1);
    cr_assert_eq(my_str_isalpha("abc"), 1);
    cr_assert_eq(my_str_isalpha("ABC"), 1);
    cr_assert_eq(my_str_isalpha("123"), 0);
    cr_assert_eq(my_str_isalpha("abc 123"), 0);
}
