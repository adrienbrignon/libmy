/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_atoll unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_atoll)
{
    cr_assert_eq(my_atoll(""), 0LL);
    cr_assert_eq(my_atoll("0"), 0LL);
    cr_assert_eq(my_atoll("1"), 1LL);
    cr_assert_eq(my_atoll("-1"), -1LL);
    cr_assert_eq(my_atoll("+1X"), 1LL);
    cr_assert_eq(my_atoll("test"), 0LL);
    cr_assert_eq(my_atoll("test1"), 0LL);
    cr_assert_eq(my_atoll("--256"), 0LL);
    cr_assert_eq(my_atoll("\t-256"), -256LL);
}
