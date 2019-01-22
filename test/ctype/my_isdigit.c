/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isdigit unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_isdigit)
{
    cr_assert_eq(my_isdigit('A'), 0);
    cr_assert_eq(my_isdigit('a'), 0);
    cr_assert_eq(my_isdigit('1'), 1);
}
