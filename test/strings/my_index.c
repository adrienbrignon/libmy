/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_index unit test.
*/

#include <criterion/criterion.h>

#include "my_strings.h"

Test(strings, my_index)
{
    cr_assert_null(my_index("", ' '));
    cr_assert_null(my_index("w", 'W'));
    cr_assert_null(my_index("Meow", 'X'));
    cr_assert_str_eq(my_index("w", 'w'), "w");
    cr_assert_str_eq(my_index("Hello world!", 'o'), "o world!");
}
