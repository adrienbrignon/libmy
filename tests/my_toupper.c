/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_toupper unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_toupper)
{
    cr_assert_eq(my_toupper('A'), 'A');
    cr_assert_eq(my_toupper('a'), 'A');
    cr_assert_eq(my_toupper('1'), '1');
}
