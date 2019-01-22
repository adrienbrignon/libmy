/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_realloc unit test.
*/

#include "my_stdlib.h"
#include "my_string.h"
#include <criterion/criterion.h>

Test(stdlib, my_realloc)
{
    char *buf = my_strdup("hello");

    cr_assert_null(my_realloc(MY_NULL, 0, 0));
    cr_assert_not_null(my_realloc(MY_NULL, 0, 3));
    cr_assert_not_null(my_realloc(buf, strlen(buf), 32));
}
