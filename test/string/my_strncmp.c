/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncmp unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strncmp)
{
    cr_assert_eq(my_strncmp("", "", 0), 0);
    cr_assert_neq(my_strncmp("A", "a", 1), 0);
    cr_assert_lt(my_strncmp("Cat", "Catch", 4), 0);
    cr_assert_gt(my_strncmp("Catch", "Cat", 4), 0);
    cr_assert_eq(my_strncmp("Hello world!", "Hello", 5), 0);
}
