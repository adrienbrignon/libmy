/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_compute_factorial_rec unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_compute_factorial_rec)
{
    cr_assert_eq(my_compute_factorial_rec(-1), 0);
    cr_assert_eq(my_compute_factorial_rec(0), 1);
    cr_assert_eq(my_compute_factorial_rec(1), 1);
    cr_assert_eq(my_compute_factorial_rec(2), 2);
    cr_assert_eq(my_compute_factorial_rec(8), 40320);
    cr_assert_eq(my_compute_factorial_rec(13), 0);
}
