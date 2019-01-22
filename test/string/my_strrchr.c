/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strrchr unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strrchr)
{
    cr_assert_null(my_strrchr("", ' '));
    cr_assert_null(my_strrchr("w", 'W'));
    cr_assert_null(my_strrchr("Meow", 'X'));
    cr_assert_str_eq(my_strrchr("w", 'w'), "w");
    cr_assert_str_eq(my_strrchr("Hello world!", 'o'), "orld!");
}
