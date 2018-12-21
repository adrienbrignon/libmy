/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcpy unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(unit, my_strcpy)
{
    char buf[16] = "Hi!";

    cr_assert_str_eq(my_strcpy(buf, "hello"), "hello");
    cr_assert_str_eq(my_strcpy(buf, "world!"), "world!");
}
