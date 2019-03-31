/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_sqrt unit test.
*/

#include <stdio.h>
#include <criterion/criterion.h>

#include "my_math.h"

Test(math, my_sqrt)
{
    cr_assert_float_eq(my_sqrt(0), 0, 1e-3);
    cr_assert_float_eq(my_sqrt(1), 1, 1e-3);
    cr_assert_float_eq(my_sqrt(64), 8, 1e-3);
    cr_assert_float_eq(my_sqrt(2), 1.414, 1e-3);
    cr_assert_float_eq(my_sqrt(42), 6.480, 1e-3);
}
