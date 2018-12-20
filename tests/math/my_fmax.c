/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_fmax unit test.
*/

#include "my_math.h"
#include <criterion/criterion.h>

Test(unit, my_fmax)
{
    cr_assert_eq(my_fmax(0, 0), 0);
    cr_assert_eq(my_fmax(0, 1), 1);
    cr_assert_eq(my_fmax(1, 0), 1);
    cr_assert_eq(my_fmax(-1, 1), 1);
    cr_assert_eq(my_fmax(1, -1), 1);
}
