/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strlwr unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(string, my_strlwr)
{
    char str[] = "Hello WORLD!";

    cr_assert_str_eq(my_strlwr(str), "hello world!");
}
