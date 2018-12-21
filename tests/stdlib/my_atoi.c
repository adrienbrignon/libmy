/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_atoi unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_atoi)
{
    cr_assert_eq(my_atoi("0"), 0);
    cr_assert_eq(my_atoi("1"), 1);
    cr_assert_eq(my_atoi("-1"), -1);
    cr_assert_eq(my_atoi("+1X"), 1);
}
