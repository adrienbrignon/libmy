/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_capitalize unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_capitalize)
{
    char got[] = "I have 2 cats.";
    char expected[] = "I Have 2 Cats.";

    my_str_capitalize(got);

    cr_assert_str_eq(got, expected);
}
