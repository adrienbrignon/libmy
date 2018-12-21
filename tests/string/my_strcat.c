/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcat unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(unit, my_strcat)
{
    char buf[16] = "Hello";

    cr_assert_str_eq(my_strcat(buf, ""), "Hello");
    cr_assert_str_eq(my_strcat(buf, " "), "Hello ");
    cr_assert_str_eq(my_strcat(buf, "world!"), "Hello world!");
}
