/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isprint unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_isprint)
{
    cr_assert_eq(my_isprint('a'), 1);
    cr_assert_eq(my_isprint(' '), 1);
}
