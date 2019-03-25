/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strspn unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strspn)
{
    char sample[] = "At 22:22, touch your nose.";

    cr_assert_eq(my_strspn("", ""), 0);
    cr_assert_eq(my_strspn("o", "o"), 1);
    cr_assert_eq(my_strspn(sample, "zxp+-"), 0);
    cr_assert_eq(my_strspn(sample, "A2t:, "), 11);
}
