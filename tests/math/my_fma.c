/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_fma unit test.
*/

#include "my_math.h"
#include <criterion/criterion.h>

Test(unit, my_fma)
{
    cr_assert_geq(my_fma(0, 0, 0), 0);
    cr_assert_geq(my_fma(0, 2, 1), 1);
    cr_assert_geq(my_fma(10, 20, 30), 230);
}
