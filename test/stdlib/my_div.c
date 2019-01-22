/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_div unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_div)
{
    my_div_t result = my_div(38, 5);

    cr_assert_eq(result.rem, 3);
    cr_assert_eq(result.quot, 7);
}
