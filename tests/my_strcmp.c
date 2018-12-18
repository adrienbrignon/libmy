/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcmp unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strcmp)
{
    cr_assert_eq(my_strcmp("", ""), 0);
    cr_assert_eq(my_strcmp("hello", "hello"), 0);
    cr_assert_gt(my_strcmp("henlo", "hello"), 0);
    cr_assert_lt(my_strcmp("hello", "henlo"), 0);
}
