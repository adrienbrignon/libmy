/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_itoa unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_itoa)
{
    char buf[12];

    cr_assert_str_eq(my_itoa(0, buf, 10), "0");
    cr_assert_str_eq(my_itoa(10, buf, 8), "12");
    cr_assert_str_eq(my_itoa(256, buf, 10), "256");
    cr_assert_str_eq(my_itoa(2389, buf, 16), "955");
    cr_assert_str_eq(my_itoa(-256, buf, 10), "-256");
    cr_assert_str_eq(my_itoa(255, buf, 2), "11111111");
}
