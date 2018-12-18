/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_min unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_min)
{
    cr_assert_eq(my_min(0, 0), 0);
    cr_assert_eq(my_min(0, 1), 0);
    cr_assert_eq(my_min(1, 0), 0);
    cr_assert_eq(my_min(-1, 1), -1);
    cr_assert_eq(my_min(1, -1), -1);
}
