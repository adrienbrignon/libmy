/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strdup unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strdup)
{
    cr_assert_str_eq(my_strdup(""), "");
    cr_assert_str_eq(my_strdup("I like trains."), "I like trains.");
}
