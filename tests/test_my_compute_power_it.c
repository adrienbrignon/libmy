/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_compute_power_it unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_compute_power_it)
{
    cr_assert_eq(my_compute_power_it(2, 0), 1);
    cr_assert_eq(my_compute_power_it(10, 0), 1);
    cr_assert_eq(my_compute_power_it(2, 8), 256);
    cr_assert_eq(my_compute_power_it(-2, 8), 256);
    cr_assert_eq(my_compute_power_it(-2, 9), -512);
    cr_assert_eq(my_compute_power_it(228, 99), 0);
}
