/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ldexp unit test.
*/

#include <criterion/criterion.h>

#include "my_math.h"

Test(math, my_ldexp)
{
    cr_assert_float_eq(my_ldexp(0, 0), 0 * my_pow(2, 0), 1e-9);
    cr_assert_float_eq(my_ldexp(1, 1), 1 * my_pow(2, 1), 1e-9);
    cr_assert_float_eq(my_ldexp(-1, 10), -1 * my_pow(2, 10), 1e-9);
    cr_assert_float_eq(my_ldexp(0.95, 4), 0.95 * my_pow(2, 4), 1e-9);
}
