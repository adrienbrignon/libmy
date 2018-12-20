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
    char *got = my_strchr("Hello world!", 'o');
    char *expected = "o world!";

    cr_assert_str_eq(got, expected);
}
