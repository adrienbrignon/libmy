/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncpy unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(string, my_strncpy)
{
    char buf[16] = "";

    cr_assert_str_eq(my_strncpy(buf, "Hello", 5), "Hello");
    my_strncpy(buf + 5, " world!", 12);
    cr_assert_str_eq(buf, "Hello world!");
}
