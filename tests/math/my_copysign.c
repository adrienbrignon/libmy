/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_copysign unit test.
*/

#include "my_math.h"
#include <criterion/criterion.h>

Test(unit, my_copysign)
{
    cr_assert_eq(my_copysign(0, 0), 0);
    cr_assert_eq(my_copysign(0, 1), 0);
    cr_assert_eq(my_copysign(0, -1), 0);
    cr_assert_eq(my_copysign(10, 1), 10);
    cr_assert_eq(my_copysign(-10, 1), 10);
    cr_assert_eq(my_copysign(10, -1), -10);
    cr_assert_eq(my_copysign(-10, -1), -10);
}
