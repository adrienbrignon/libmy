/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_lltoa unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_lltoa)
{
    char buf[12];

    cr_assert_str_eq(my_lltoa(0LL, buf, 10), "0");
    cr_assert_str_eq(my_lltoa(0LL, buf, 16), "0");
    cr_assert_str_eq(my_lltoa(256LL, buf, 10), "256");
    cr_assert_str_eq(my_lltoa(-256LL, buf, 10), "-256");
    cr_assert_str_eq(my_lltoa(255LL, buf, 2), "11111111");
    cr_assert_str_eq(my_lltoa(214876592LL, buf, 16), "ccec1b0");
}
