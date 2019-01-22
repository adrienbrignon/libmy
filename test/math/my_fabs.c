/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_fabs unit test.
*/

#include <criterion/criterion.h>

#include "my_math.h"

Test(math, my_fabs)
{
    cr_assert_geq(my_fabs(-1), 1);
    cr_assert_geq(my_fabs(0), 0);
    cr_assert_geq(my_fabs(1), 1);
}
