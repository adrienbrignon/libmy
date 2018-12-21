/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_memmove unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(unit, my_memmove)
{
    char x[] = "hello world!";
    char y[] = "hell, ";

    cr_assert_str_eq(my_memmove(x, y, 6), "hell, world!");
    cr_assert_str_eq(my_memmove(x, x + 6, 6), "world!world!");
}
