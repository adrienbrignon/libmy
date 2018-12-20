/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strrev unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_strrev)
{
    char empty[1] = "";
    char radar[6] = "radar";
    char hello[6] = "Hello";

    cr_assert_str_eq(my_strrev(empty), "");
    cr_assert_str_eq(my_strrev(radar), "radar");
    cr_assert_str_eq(my_strrev(hello), "olleH");
}
