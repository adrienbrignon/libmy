/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strpbrk unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strpbrk)
{
    char *got = my_strpbrk("Hello world!", "world!");
    char *expected = "llo world!";

    cr_assert_str_eq(got, expected);
}

