/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_round unit test.
*/

#include "my.h"
#include <float.h>
#include <criterion/criterion.h>

Test(unit, my_round)
{
    cr_assert_eq(my_round(0), 0);
    cr_assert_eq(my_round(1), 1);
    cr_assert_eq(my_round(-1), -1);
    cr_assert_eq(my_round(1.6), 2);
    cr_assert_eq(my_round(1.2), 1);
    cr_assert_eq(my_round(2.8), 3);
    cr_assert_eq(my_round(-2.3), -2);
    cr_assert_eq(my_round(-2.8), -3);
}
