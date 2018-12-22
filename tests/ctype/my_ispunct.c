/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ispunct unit test.
*/

#include "my_ctype.h"
#include <criterion/criterion.h>

Test(unit, my_ispunct)
{
    cr_assert_eq(my_ispunct('A'), 0);
    cr_assert_eq(my_ispunct('a'), 0);
    cr_assert_eq(my_ispunct('.'), 1);
    cr_assert_eq(my_ispunct('@'), 1);
    cr_assert_eq(my_ispunct('`'), 1);
    cr_assert_eq(my_ispunct('~'), 1);
    cr_assert_eq(my_ispunct('\0'), 0);
}
