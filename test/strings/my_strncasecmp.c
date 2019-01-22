/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncmp unit test.
*/

#include <criterion/criterion.h>

#include "my_strings.h"

Test(strings, my_strncasecmp)
{
    cr_assert_eq(my_strncasecmp("", "", 0), 0);
    cr_assert_eq(my_strncasecmp("0", "0", 0), 0);
    cr_assert_eq(my_strncasecmp("A", "a", 1), 0);
    cr_assert_eq(my_strncasecmp("A", "A", 1), 0);
    cr_assert_eq(my_strncasecmp("a", "A", 1), 0);
    cr_assert_neq(my_strncasecmp("abc", "def", 1), 0);
    cr_assert_lt(my_strncasecmp("Cat", "Catch", 3), 0);
    cr_assert_gt(my_strncasecmp("Catch", "Cat", 4), 0);
    cr_assert_eq(my_strncasecmp("Hello", "HeLlO WoRLD!", 4), 0);
}
