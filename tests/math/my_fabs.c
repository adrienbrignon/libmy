/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_fabs unit test.
*/

#include "my.h"
#include <float.h>
#include <criterion/criterion.h>

Test(unit, my_fabs)
{
    cr_assert_geq(my_fabs(-1), 1);
    cr_assert_geq(my_fabs(0), 0);
    cr_assert_geq(my_fabs(1), 1);
    cr_assert_geq(my_fabs(DBL_MAX), DBL_MAX);
    cr_assert_geq(my_fabs(DBL_MIN), 0);
}
