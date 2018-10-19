/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_revstr unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_revstr)
{
    char empty[1] = "";
    char radar[6] = "radar";
    char hello[6] = "Hello";

    cr_assert_str_eq(my_revstr(empty), "");
    cr_assert_str_eq(my_revstr(radar), "radar");
    cr_assert_str_eq(my_revstr(hello), "olleH");
}
