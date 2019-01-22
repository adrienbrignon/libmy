/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_tolower unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_tolower)
{
    cr_assert_eq(my_tolower('A'), 'a');
    cr_assert_eq(my_tolower('a'), 'a');
    cr_assert_eq(my_tolower('1'), '1');
}
