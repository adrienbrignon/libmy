/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_atoi unit test.
*/

#include "my.h"
#include <limits.h>
#include <criterion/criterion.h>

Test(unit, my_atoi)
{
    char max[10 + 1];
    char min[10 + 1];

    my_itoa(INT_MIN, min);
    my_itoa(INT_MAX, max);

    cr_assert_eq(my_atoi(min), INT_MIN);
    cr_assert_eq(my_atoi(max), INT_MAX);
}
