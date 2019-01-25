/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_malloc unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_malloc)
{
    cr_assert_not_null(my_malloc(sizeof (int)));
    cr_assert_not_null(my_malloc(sizeof (void *)));
    cr_assert_not_null(my_malloc(sizeof (unsigned long)));
}
