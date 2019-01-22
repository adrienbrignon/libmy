/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_memcpy unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(string, my_memcpy)
{
    char x[] = "hello doggo!";
    char y[] = "kitty";

    cr_assert_str_eq(my_memcpy(y, x + 6, 5), "doggo");
}
