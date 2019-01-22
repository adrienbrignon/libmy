/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_calloc unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_calloc)
{
    char *buffer = my_calloc(1, 8);

    cr_assert_not_null(buffer);
    cr_assert_eq(buffer[0], '\0');
    cr_assert_eq(buffer[7], '\0');
    cr_assert_null(my_calloc(0, 0));
    cr_assert_null(my_calloc(0, 3));
}
