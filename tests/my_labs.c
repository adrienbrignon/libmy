/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_labs unit test.
*/

#include "my.h"
#include <limits.h>
#include <criterion/criterion.h>

Test(unit, my_labs)
{
    cr_assert_eq(my_labs(0), 0);
    cr_assert_eq(my_labs(LONG_MAX), LONG_MAX);
    cr_assert_eq(my_labs(LONG_MIN + 1), LONG_MAX);
}
