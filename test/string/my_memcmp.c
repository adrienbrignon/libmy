/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_memcmp unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(string, my_memcmp)
{
    int x = 0;
    int y = 3;

    cr_assert_eq(my_memcmp(&x, &y, 0), 0);
    cr_assert_lt(my_memcmp(&x, &y, 1), 0);
    cr_assert_lt(my_memcmp(&x, &y, 1), 0);
    cr_assert_eq(my_memcmp("x", "x", 1), 0);
    cr_assert_gt(my_memcmp("x", "X", 1), 0);
}
