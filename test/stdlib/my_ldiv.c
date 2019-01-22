/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ldiv unit test.
*/

#include "my_stdlib.h"
#include <criterion/criterion.h>

Test(stdlib, my_ldiv)
{
    my_ldiv_t result = my_ldiv(1000000L, 132L);

    cr_assert_eq(result.rem, 100L);
    cr_assert_eq(result.quot, 7575L);
}
