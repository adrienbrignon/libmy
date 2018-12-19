/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_abs unit test.
*/

#include "my.h"
#include <limits.h>
#include <criterion/criterion.h>

Test(unit, my_abs)
{
    cr_assert_eq(my_abs(0), 0);
    cr_assert_eq(my_abs(INT_MAX), INT_MAX);
    cr_assert_eq(my_abs(INT_MIN + 1), INT_MAX);
}
