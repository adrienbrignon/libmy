/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ltoa unit test.
*/

#include "my.h"
#include <limits.h>
#include <criterion/criterion.h>

Test(unit, my_ltoa)
{
    char max[18 + 1];
    char min[18 + 1];

    my_ltoa(LONG_MIN, min);
    my_ltoa(LONG_MAX, max);

    cr_assert_eq(my_atol(min), LONG_MIN);
    cr_assert_eq(my_atol(max), LONG_MAX);
}
