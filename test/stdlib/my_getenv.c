/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_getenv unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_getenv)
{
    cr_assert_null(my_getenv(""));
    cr_assert_not_null(my_getenv("PWD"));
    cr_assert_not_null(my_getenv("HOME"));
}
