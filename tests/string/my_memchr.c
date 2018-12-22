/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_memchr unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(unit, my_memchr)
{
    cr_assert_null(my_memchr("w", 'W', 1));
    cr_assert_null(my_memchr("Meow", 'X', 4));
    cr_assert_str_eq(my_memchr("w", 'w', 1), "w");
    cr_assert_str_eq(my_memchr("Hello world!", 'o', 12), "o world!");
}
