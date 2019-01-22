/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ltoa unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_ltoa)
{
    char buf[12];

    cr_assert_str_eq(my_ltoa(0L, buf, 10), "0");
    cr_assert_str_eq(my_ltoa(0L, buf, 16), "0");
    cr_assert_str_eq(my_ltoa(256L, buf, 10), "256");
    cr_assert_str_eq(my_ltoa(-256L, buf, 10), "-256");
    cr_assert_str_eq(my_ltoa(255L, buf, 2), "11111111");
    cr_assert_str_eq(my_ltoa(214876592L, buf, 16), "ccec1b0");
}
