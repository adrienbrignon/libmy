/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isalpha unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_isalpha)
{
    cr_assert_eq(my_isalpha('a'), 1);
    cr_assert_eq(my_isalpha('Z'), 1);
    cr_assert_eq(my_isalpha('@'), 0);
    cr_assert_eq(my_isalpha('1'), 0);
}
