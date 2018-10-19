/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_tolower unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_tolower)
{
    cr_assert_eq(my_tolower('A'), 'a');
    cr_assert_eq(my_tolower('a'), 'a');
    cr_assert_eq(my_tolower('1'), '1');
}
