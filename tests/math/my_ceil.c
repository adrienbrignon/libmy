/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ceil unit test.
*/

#include "my_math.h"
#include <criterion/criterion.h>

Test(math, my_ceil)
{
    cr_assert_eq(my_ceil(0), 0);
    cr_assert_eq(my_ceil(1), 1);
    cr_assert_eq(my_ceil(-1), -1);
    cr_assert_eq(my_ceil(1.6), 2);
    cr_assert_eq(my_ceil(1.2), 2);
    cr_assert_eq(my_ceil(2.8), 3);
    cr_assert_eq(my_ceil(-2.3), -2);
}
