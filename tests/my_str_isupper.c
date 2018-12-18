/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_isupper unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_isupper)
{
    cr_assert_eq(my_str_isupper(""), 0);
    cr_assert_eq(my_str_isupper("A"), 1);
    cr_assert_eq(my_str_isupper("abc"), 0);
    cr_assert_eq(my_str_isupper("ABC"), 1);
    cr_assert_eq(my_str_isupper("123"), 0);
    cr_assert_eq(my_str_isupper("abc 123"), 0);
}
