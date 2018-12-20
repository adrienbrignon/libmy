/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strrchr unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(unit, my_strrchr)
{
    char *expected = "orld!";
    char *got = my_strrchr("Hello world!", 'o');

    cr_assert_str_eq(got, expected);
}
