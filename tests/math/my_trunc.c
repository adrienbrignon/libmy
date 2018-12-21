/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_trunc unit test.
*/

#include "my_math.h"
#include <criterion/criterion.h>

Test(unit, my_trunc)
{
    cr_assert_eq(my_trunc(0), 0);
    cr_assert_eq(my_trunc(1), 1);
    cr_assert_eq(my_trunc(-1), -1);
    cr_assert_eq(my_trunc(1.6), 1);
    cr_assert_eq(my_trunc(1.2), 1);
    cr_assert_eq(my_trunc(2.8), 2);
    cr_assert_eq(my_trunc(-2.3), -2);
    cr_assert_eq(my_trunc(-2.8), -2);
}
