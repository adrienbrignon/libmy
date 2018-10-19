/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_getnbr unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_getnbr)
{
    cr_assert_eq(my_getnbr("0"), 0);
    cr_assert_eq(my_getnbr("+42"), 42);
    cr_assert_eq(my_getnbr("-42"), -42);
    cr_assert_eq(my_getnbr("123456"), 123456);
    cr_assert_eq(my_getnbr("+---+--++---+---+---+42"), 42);
    cr_assert_eq(my_getnbr("+---+--++---+---+---+-42"), -42);
}
