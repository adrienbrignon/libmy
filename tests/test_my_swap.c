/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_swap unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_swap)
{
    int a = 1;
    int b = 2;

    my_swap(&a, &b);

    cr_assert_eq(a, 2);
    cr_assert_eq(b, 1);
}
