/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strupr unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(unit, my_strupr)
{
    char str[] = "Hello world!";

    cr_assert_str_eq(my_strupr(str), "HELLO WORLD!");
}
