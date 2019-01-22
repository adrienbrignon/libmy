/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_toupper unit test.
*/

#include "my_ctype.h"
#include <criterion/criterion.h>

Test(ctype, my_toupper)
{
    cr_assert_eq(my_toupper('A'), 'A');
    cr_assert_eq(my_toupper('a'), 'A');
    cr_assert_eq(my_toupper('1'), '1');
}
