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

    cr_assert_str_eq(my_itoa(0, buf), "0");
    cr_assert_str_eq(my_itoa(256, buf), "256");
    cr_assert_str_eq(my_itoa(-256, buf), "-256");
}
