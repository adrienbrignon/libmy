/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isxdigit unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_isxdigit)
{
    cr_assert_eq(my_isxdigit('0'), 1);
    cr_assert_eq(my_isxdigit('1'), 1);
    cr_assert_eq(my_isxdigit('A'), 1);
    cr_assert_eq(my_isxdigit('a'), 1);
    cr_assert_eq(my_isxdigit('F'), 1);
    cr_assert_eq(my_isxdigit('f'), 1);
    cr_assert_eq(my_isxdigit('G'), 0);
    cr_assert_eq(my_isxdigit('g'), 0);
}
