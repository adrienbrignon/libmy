/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_fmod unit test.
*/

#include "my_math.h"
#include <criterion/criterion.h>

Test(math, my_fmod)
{
    cr_assert_float_eq(my_fmod(0, 1), 0, 1e-9);
    cr_assert_float_eq(my_fmod(5.1, 3.0), 2.1, 1e-9);
    cr_assert_float_eq(my_fmod(5.1, -3.0), 2.1, 1e-9);
    cr_assert_float_eq(my_fmod(-5.1, 3.0), -2.1, 1e-9);
    cr_assert_float_eq(my_fmod(-5.1, -3.0), -2.1, 1e-9);
}
