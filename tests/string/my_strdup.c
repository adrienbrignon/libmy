/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strdup unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strdup)
{
    char *str = my_strdup("I like trains.");

    cr_assert_str_eq(str, "I like trains.");
}
