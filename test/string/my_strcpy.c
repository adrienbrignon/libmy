/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcpy unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strcpy)
{
    char buf[16] = "Hi!";

    cr_assert_str_eq(my_strcpy(buf, "hello"), "hello");
    cr_assert_str_eq(my_strcpy(buf, "world!"), "world!");
}
