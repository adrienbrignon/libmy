/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strlwr unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strlwr)
{
    char str[] = "Hello WORLD!";

    cr_assert_str_eq(my_strlwr(str), "hello world!");
}
