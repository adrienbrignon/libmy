/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strupr unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strupr)
{
    char str[] = "Hello world!";

    cr_assert_str_eq(my_strupr(str), "HELLO WORLD!");
}
