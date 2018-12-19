/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_putstr unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(unit, my_strchr)
{
    char *expected = "o world!";
    char *got = my_strchr("Hello world!", 'o');

    cr_assert_str_eq(got, expected);
}
