/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_memset unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(unit, my_memset)
{
    char password[] = "password";

    my_memset(password + 1, '*', 6);
    cr_assert_str_eq(password, "p******d");
}
