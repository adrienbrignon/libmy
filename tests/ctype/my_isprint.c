/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isprint unit test.
*/

#include "my_ctype.h"
#include <criterion/criterion.h>

Test(unit, my_isprint)
{
    cr_assert_eq(my_isprint('a'), 1);
    cr_assert_eq(my_isprint(' '), 1);
}
