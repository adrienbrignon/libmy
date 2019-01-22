/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strchr unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strchr)
{
    cr_assert_null(my_strchr("w", 'W'));
    cr_assert_null(my_strchr("Meow", 'X'));
    cr_assert_str_eq(my_strchr("w", 'w'), "w");
    cr_assert_str_eq(my_strchr("Hello world!", 'o'), "o world!");
}
