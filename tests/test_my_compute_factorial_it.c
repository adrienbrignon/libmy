/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_compute_factorial_it unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_compute_factorial_it)
{
    cr_assert_eq(my_compute_factorial_it(-1), 0);
    cr_assert_eq(my_compute_factorial_it(0), 1);
    cr_assert_eq(my_compute_factorial_it(1), 1);
    cr_assert_eq(my_compute_factorial_it(2), 2);
    cr_assert_eq(my_compute_factorial_it(8), 40320);
    cr_assert_eq(my_compute_factorial_it(13), 0);
}
