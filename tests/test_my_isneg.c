/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isneg unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_isneg)
{
    cr_assert_eq(my_isneg(1), 0);
    cr_assert_eq(my_isneg(0), 0);
    cr_assert_eq(my_isneg(-1), 1);
}
