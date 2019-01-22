/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_memmove unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_memmove)
{
    char x[] = "hello world!";
    char y[] = "hell, ";

    cr_assert_str_eq(my_memmove(x, y, 6), "hell, world!");
    cr_assert_str_eq(my_memmove(x, x + 6, 6), "world!world!");
}
