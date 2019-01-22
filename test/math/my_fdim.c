/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_fdim unit test.
*/

#include <criterion/criterion.h>

#include "my_math.h"

Test(math, my_fdim)
{
    cr_assert_float_eq(my_fdim(4, 1), 3, 1e-9);
    cr_assert_float_eq(my_fdim(1, 4), 0, 1e-9);
    cr_assert_float_eq(my_fdim(1, -4), 5, 1e-9);
    cr_assert_float_eq(my_fdim(4, -1), 5, 1e-9);
}
