/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_labs unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_labs)
{
    cr_assert_eq(my_labs(0), 0);
    cr_assert_eq(my_labs(65537L), 65537L);
    cr_assert_eq(my_labs(-100000L), 100000);
}
