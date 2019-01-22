/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isblank unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_isblank)
{
    cr_assert_eq(my_isblank('X'), 0);
    cr_assert_eq(my_isblank(' '), 1);
    cr_assert_eq(my_isblank('\0'), 0);
    cr_assert_eq(my_isblank('\r'), 0);
    cr_assert_eq(my_isblank('\t'), 1);
    cr_assert_eq(my_isblank('\n'), 0);
    cr_assert_eq(my_isblank('\v'), 0);
    cr_assert_eq(my_isblank('\f'), 0);
}
