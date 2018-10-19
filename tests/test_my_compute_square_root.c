/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_compute_square_root unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_compute_square_root)
{
    cr_assert_eq(my_compute_square_root(-4), 0);
    cr_assert_eq(my_compute_square_root(0), 0);
    cr_assert_eq(my_compute_square_root(1), 1);
    cr_assert_eq(my_compute_square_root(2), 0);
    cr_assert_eq(my_compute_square_root(4), 2);
    cr_assert_eq(my_compute_square_root(16), 4);
    cr_assert_eq(my_compute_square_root(256), 16);
}
