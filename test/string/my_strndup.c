/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strndup unit test.
*/

#include <signal.h>
#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strndup)
{
    cr_assert_str_eq(my_strndup("", 0), "");
    cr_assert_str_eq(my_strndup("test", 4), "test");
    cr_assert_str_eq(my_strndup("hello", 4), "hell");
}
