/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ispos unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_ispos)
{
    cr_assert_eq(my_ispos(1), 1);
    cr_assert_eq(my_ispos(0), 0);
    cr_assert_eq(my_ispos(-1), 0);
}
