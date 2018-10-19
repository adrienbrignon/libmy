/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcpy unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strcpy)
{
    char str[5];
    char const *readonly = "hello";

    my_strcpy(str, readonly);

    cr_assert_str_eq(str, "hello");
}
