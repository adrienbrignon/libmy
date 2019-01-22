/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strset unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strset)
{
    char str[] = "I like trains.";

    cr_assert_str_eq(my_strset(str, '.'), "..............");
}
