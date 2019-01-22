/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isupper unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_isupper)
{
    cr_assert_eq(my_isupper('A'), 1);
    cr_assert_eq(my_isupper('a'), 0);
    cr_assert_eq(my_isupper('1'), 0);
}
