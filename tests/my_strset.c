/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strset unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strset)
{
    char str[] = "I like trains.";

    cr_assert_str_eq(my_strset(str, '.'), "..............");
}
