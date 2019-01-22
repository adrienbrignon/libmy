/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strrev unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strrev)
{
    char empty[1] = "";
    char radar[6] = "radar";
    char hello[6] = "Hello";

    cr_assert_str_eq(my_strrev(empty), "");
    cr_assert_str_eq(my_strrev(radar), "radar");
    cr_assert_str_eq(my_strrev(hello), "olleH");
}
