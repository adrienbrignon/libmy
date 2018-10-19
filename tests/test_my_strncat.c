/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncat unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strncat)
{
    char empty[1] = "";
    char hello[11] = "Hello";

    cr_assert_str_eq(my_strncat(empty, "", 0), "");
    cr_assert_str_eq(my_strncat(hello, " world!", 6), "Hello world");
}
