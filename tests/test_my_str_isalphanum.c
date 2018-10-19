/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_isupper unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_isalphanum)
{
    cr_assert_eq(my_str_isalphanum(""), 0);
    cr_assert_eq(my_str_isalphanum("A"), 1);
    cr_assert_eq(my_str_isalphanum("abc"), 1);
    cr_assert_eq(my_str_isalphanum("ABC"), 1);
    cr_assert_eq(my_str_isalphanum("123"), 1);
    cr_assert_eq(my_str_isalphanum("abc 123"), 0);
    cr_assert_eq(my_str_isalphanum("abcABC123"), 1);
}
