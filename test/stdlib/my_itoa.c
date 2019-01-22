/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_itoa unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_itoa)
{
    char buf[12];

    cr_assert_str_eq(my_itoa(0, buf, 10), "0");
    cr_assert_str_eq(my_itoa(10, buf, 8), "12");
    cr_assert_str_eq(my_itoa(15, buf, 16), "f");
    cr_assert_str_eq(my_itoa(255, buf, 16), "ff");
    cr_assert_str_eq(my_itoa(256, buf, 10), "256");
    cr_assert_str_eq(my_itoa(2389, buf, 16), "955");
    cr_assert_str_eq(my_itoa(-256, buf, 10), "-256");
    cr_assert_str_eq(my_itoa(255, buf, 2), "11111111");
}
