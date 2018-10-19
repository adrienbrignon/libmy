/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_toupper unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_toupper)
{
    char str[] = "Hello world!";

    cr_assert_str_eq(my_str_toupper(str), "HELLO WORLD!");
}
