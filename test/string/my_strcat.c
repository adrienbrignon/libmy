/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcat unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strcat)
{
    char buf[16] = "Hello";

    cr_assert_str_eq(my_strcat(buf, ""), "Hello");
    cr_assert_str_eq(my_strcat(buf, " "), "Hello ");
    cr_assert_str_eq(my_strcat(buf, "world!"), "Hello world!");
}
