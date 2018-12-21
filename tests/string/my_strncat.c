/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncat unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(unit, my_strncat)
{
    char buf[16] = "";

    cr_assert_str_eq(my_strncat(buf, "Hello", 5), "Hello");
    cr_assert_str_eq(my_strncat(buf, " world...", 6), "Hello world");
    cr_assert_str_eq(my_strncat(buf, "!", 2), "Hello world!");
}
