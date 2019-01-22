/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcspn unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(string, my_strcspn)
{
    char sample[] = "At 22:22, touch your nose.";

    cr_assert_eq(my_strcspn(sample, "yoer,"), 8);
    cr_assert_eq(my_strcspn(sample, "zxp+-"), 26);
}


