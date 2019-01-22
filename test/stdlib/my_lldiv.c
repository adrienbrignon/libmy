/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_lldiv unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_lldiv)
{
    my_lldiv_t result = my_lldiv(31558149LL, 3600LL);

    cr_assert_eq(result.rem, 549LL);
    cr_assert_eq(result.quot, 8766LL);
}
