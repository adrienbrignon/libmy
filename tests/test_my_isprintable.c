/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isprintable unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_isprintable)
{
    cr_assert_eq(my_isprintable('a'), 1);
    cr_assert_eq(my_isprintable(' '), 1);
}
