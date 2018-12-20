/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_itoa unit test.
*/

#include "my.h"
#include <limits.h>
#include <criterion/criterion.h>

Test(unit, my_itoa)
{
    char max[18 + 1];
    char min[18 + 1];

    my_itoa(INT_MIN, min);
    my_itoa(INT_MAX, max);

    cr_assert_eq(my_atoi(min), INT_MIN);
    cr_assert_eq(my_atoi(max), INT_MAX);
}
