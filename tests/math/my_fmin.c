/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_fmin unit test.
*/

#include "my_math.h"
#include <criterion/criterion.h>

Test(unit, my_fmin)
{
    cr_assert_eq(my_fmin(0, 0), 0);
    cr_assert_eq(my_fmin(0, 1), 0);
    cr_assert_eq(my_fmin(1, 0), 0);
    cr_assert_eq(my_fmin(-1, 1), -1);
    cr_assert_eq(my_fmin(1, -1), -1);
}
