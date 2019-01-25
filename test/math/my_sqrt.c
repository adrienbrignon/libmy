/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_sqrt unit test.
*/

#include <criterion/criterion.h>

#include "my_math.h"

Test(math, my_sqrt)
{
    cr_assert_eq(my_sqrt(0), 0);
    cr_assert_eq(my_sqrt(2), 0);
    cr_assert_eq(my_sqrt(1), 1);
    cr_assert_eq(my_sqrt(64), 8);
    cr_assert_eq(my_sqrt(64), 8);
}