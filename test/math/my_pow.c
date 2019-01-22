/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_pow unit test.
*/

#include <criterion/criterion.h>

#include "my_math.h"

Test(math, my_pow)
{
    cr_assert_eq(my_pow(0, 0), 1);
    cr_assert_eq(my_pow(0, 1), 0);
    cr_assert_eq(my_pow(2, 2), 4);
    cr_assert_eq(my_pow(2, 4), 16);
    cr_assert_eq(my_pow(0, -1), 0);
}
