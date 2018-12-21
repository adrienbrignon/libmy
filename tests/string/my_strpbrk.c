/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strpbrk unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(unit, my_strpbrk)
{
    cr_assert_null(my_strpbrk("Hello world!", ""));
    cr_assert_null(my_strpbrk("Hello world!", "xvhg"));
    cr_assert_str_eq(my_strpbrk("Hello world!", "world!"), "llo world!");
}

