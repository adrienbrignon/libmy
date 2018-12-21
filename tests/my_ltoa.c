/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ltoa unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_ltoa)
{
    char buf[12];

    cr_assert_str_eq(my_ltoa(0L, buf), "0");
    cr_assert_str_eq(my_ltoa(256L, buf), "256");
    cr_assert_str_eq(my_ltoa(-256L, buf), "-256");
}
