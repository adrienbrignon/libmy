/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_atol unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_atol)
{
    cr_assert_eq(my_atol(""), 0L);
    cr_assert_eq(my_atol("0"), 0L);
    cr_assert_eq(my_atol("1"), 1L);
    cr_assert_eq(my_atol("-1"), -1L);
    cr_assert_eq(my_atol("+1X"), 1L);
    cr_assert_eq(my_atol("test"), 0L);
    cr_assert_eq(my_atol("test1"), 0L);
    cr_assert_eq(my_atol("--256"), 0L);
    cr_assert_eq(my_atol("\t-256"), -256L);
}
