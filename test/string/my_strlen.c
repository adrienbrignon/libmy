/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strlen unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, test_my_strlen)
{
    cr_assert_eq(my_strlen(""), 0);
    cr_assert_eq(my_strlen("a"), 1);
    cr_assert_eq(my_strlen("abc"), 3);
}
