/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_atol unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_atol)
{
    cr_assert_eq(my_atol("0"), 0L);
    cr_assert_eq(my_atol("1"), 1L);
    cr_assert_eq(my_atol("-1"), -1L);
}
