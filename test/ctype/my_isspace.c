/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isspace unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_isspace)
{
    cr_assert_eq(my_isspace('X'), 0);
    cr_assert_eq(my_isspace(' '), 1);
    cr_assert_eq(my_isspace('\0'), 0);
    cr_assert_eq(my_isspace('\r'), 1);
    cr_assert_eq(my_isspace('\t'), 1);
    cr_assert_eq(my_isspace('\n'), 1);
    cr_assert_eq(my_isspace('\v'), 1);
    cr_assert_eq(my_isspace('\f'), 1);
}
