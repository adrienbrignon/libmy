/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_atoi unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_atoi)
{
    cr_assert_eq(my_atoi(""), 0);
    cr_assert_eq(my_atoi("0"), 0);
    cr_assert_eq(my_atoi("1"), 1);
    cr_assert_eq(my_atoi("-1"), -1);
    cr_assert_eq(my_atoi("+1X"), 1);
    cr_assert_eq(my_atoi("test"), 0);
    cr_assert_eq(my_atoi("test1"), 0);
    cr_assert_eq(my_atoi("--256"), 0);
    cr_assert_eq(my_atoi("\t-256"), -256);
}
