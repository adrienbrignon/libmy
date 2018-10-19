/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncpy unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strcat)
{
    char empty[1] = "";
    char hello[12] = "Hello";

    cr_assert_str_eq(my_strcat(empty, ""), "");
    cr_assert_str_eq(my_strcat(hello, ""), "Hello");
    cr_assert_str_eq(my_strcat(hello, " world!"), "Hello world!");
}
