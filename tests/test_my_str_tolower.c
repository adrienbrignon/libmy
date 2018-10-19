/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_tolower unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_tolower)
{
    char str[] = "Hello WORLD!";

    cr_assert_str_eq(my_str_tolower(str), "hello world!");
}
