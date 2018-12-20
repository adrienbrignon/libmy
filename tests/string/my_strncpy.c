/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncpy unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strncpy)
{
    char six[6];
    char eleven[11];

    my_strncpy(eleven, "Hi", 2);
    my_strncpy(six, "HelloWorld", 5);

    cr_assert_str_eq(eleven, "Hi");
    cr_assert_str_eq(six, "Hello");
}
