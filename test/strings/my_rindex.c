/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_rindex unit test.
*/

#include <criterion/criterion.h>

#include "my_strings.h"

Test(strings, my_rindex)
{
    cr_assert_null(my_rindex("", ' '));
    cr_assert_null(my_rindex("w", 'W'));
    cr_assert_null(my_rindex("Meow", 'X'));
    cr_assert_str_eq(my_rindex("w", 'w'), "w");
    cr_assert_str_eq(my_rindex("Hello world!", 'o'), "orld!");
}
