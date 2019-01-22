/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncmp unit test.
*/

#include <criterion/criterion.h>

#include "my_strings.h"

Test(strings, my_strcasecmp)
{
    cr_assert_eq(my_strcasecmp("", ""), 0);
    cr_assert_eq(my_strcasecmp("0", "0"), 0);
    cr_assert_eq(my_strcasecmp("A", "a"), 0);
    cr_assert_eq(my_strcasecmp("A", "A"), 0);
    cr_assert_eq(my_strcasecmp("a", "A"), 0);
    cr_assert_neq(my_strcasecmp("abc", "d"), 0);
    cr_assert_lt(my_strcasecmp("Cat", "Catch"), 0);
    cr_assert_gt(my_strcasecmp("Catch", "Cat"), 0);
    cr_assert_eq(my_strcasecmp("Hello world!", "HeLlO WoRLD!"), 0);
}
