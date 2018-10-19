/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_swap unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_swap)
{
    char *a = "Hello";
    char *b = "world!";

    my_str_swap(&a, &b);

    cr_assert_str_eq(a, "world!");
    cr_assert_str_eq(b, "Hello");
}
