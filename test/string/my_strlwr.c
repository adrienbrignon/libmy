/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strlwr unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strlwr)
{
    char str[] = "Hello WORLD!";

    cr_assert_str_eq(my_strlwr(str), "hello world!");
}
