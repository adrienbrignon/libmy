/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strset unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(string, my_strset)
{
    char str[] = "I like trains.";

    cr_assert_str_eq(my_strset(str, '.'), "..............");
}
