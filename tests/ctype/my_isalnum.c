/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isalnum unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_isalnum)
{
    cr_assert_eq(my_isalnum(' '), 0);
    cr_assert_eq(my_isalnum('@'), 0);
    cr_assert_eq(my_isalnum('A'), 1);
    cr_assert_eq(my_isalnum('a'), 1);
    cr_assert_eq(my_isalnum('1'), 1);
    cr_assert_eq(my_isalnum('0'), 1);
}
