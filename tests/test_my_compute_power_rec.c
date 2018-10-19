/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_compute_power_rec unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_compute_power_rec)
{
    cr_assert_eq(my_compute_power_rec(2, 0), 1);
    cr_assert_eq(my_compute_power_rec(2, -1), 0);
    cr_assert_eq(my_compute_power_rec(10, 0), 1);
    cr_assert_eq(my_compute_power_rec(2, 8), 256);
    cr_assert_eq(my_compute_power_rec(-2, 8), 256);
    cr_assert_eq(my_compute_power_rec(-2, 9), -512);
    cr_assert_eq(my_compute_power_rec(228, 99), 0);
}
