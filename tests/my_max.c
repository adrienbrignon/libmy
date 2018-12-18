/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_max unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_max)
{
    cr_assert_eq(my_max(0, 0), 0);
    cr_assert_eq(my_max(0, 1), 1);
    cr_assert_eq(my_max(1, 0), 1);
    cr_assert_eq(my_max(-1, 1), 1);
    cr_assert_eq(my_max(1, -1), 1);
}
