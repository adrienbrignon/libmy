/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_islower unit test.
*/

#include "my_ctype.h"
#include <criterion/criterion.h>

Test(ctype, my_islower)
{
    cr_assert_eq(my_islower('A'), 0);
    cr_assert_eq(my_islower('a'), 1);
    cr_assert_eq(my_islower('1'), 0);
}
