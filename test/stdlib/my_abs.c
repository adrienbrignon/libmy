/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_abs unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_abs)
{
    cr_assert_eq(my_abs(0), 0);
    cr_assert_eq(my_abs(1), 1);
    cr_assert_eq(my_abs(-1), 1);
}
