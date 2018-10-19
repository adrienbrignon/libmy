/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_islower unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_islower)
{
    cr_assert_eq(my_str_islower(""), 0);
    cr_assert_eq(my_str_islower("a"), 1);
    cr_assert_eq(my_str_islower("abc"), 1);
    cr_assert_eq(my_str_islower("ABC"), 0);
    cr_assert_eq(my_str_islower("123"), 0);
    cr_assert_eq(my_str_islower("abc 123"), 0);
}
