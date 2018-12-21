/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strchr unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(unit, my_strchr)
{
    cr_assert_null(my_strchr("w", 'W'));
    cr_assert_null(my_strchr("Meow", 'X'));
    cr_assert_str_eq(my_strchr("w", 'w'), "w");
    cr_assert_str_eq(my_strchr("Hello world!", 'o'), "o world!");
}
