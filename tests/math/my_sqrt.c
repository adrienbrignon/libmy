/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_sqrt unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_sqrt)
{
    cr_assert_eq(my_sqrt(0), 0);
    cr_assert_eq(my_sqrt(2), 0);
    cr_assert_eq(my_sqrt(1), 1);
    cr_assert_eq(my_sqrt(64), 8);
    cr_assert_eq(my_sqrt(64), 8);
}
