/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isnum unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_isnum)
{
    cr_assert_eq(my_isnum('A'), 0);
    cr_assert_eq(my_isnum('a'), 0);
    cr_assert_eq(my_isnum('1'), 1);
}
