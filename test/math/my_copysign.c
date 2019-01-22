/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_copysign unit test.
*/

#include <criterion/criterion.h>

#include "my_math.h"

Test(math, my_copysign)
{
    cr_assert_eq(my_copysign(0, 0), 0);
    cr_assert_eq(my_copysign(0, 1), 0);
    cr_assert_eq(my_copysign(0, -1), 0);
    cr_assert_eq(my_copysign(10, 1), 10);
    cr_assert_eq(my_copysign(-10, 1), 10);
    cr_assert_eq(my_copysign(10, -1), -10);
    cr_assert_eq(my_copysign(-10, -1), -10);
}
