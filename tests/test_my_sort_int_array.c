/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_sort_int_array unit test.
*/

#include <stdio.h>
#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_sort_int_array)
{
    int array[7] = {1, 2, 0, 4, 9, 2, 0};
    int expected[7] = {0, 0, 1, 2, 4, 9};

    my_sort_int_array(array, 7);

    cr_assert_arr_eq(array, expected, 7);
}
