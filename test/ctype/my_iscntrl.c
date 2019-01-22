/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_iscntrl unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_iscntrl)
{
    cr_assert_eq(my_iscntrl('a'), 0);
    cr_assert_eq(my_iscntrl(' '), 0);
    cr_assert_eq(my_iscntrl('\t'), 1);
    cr_assert_eq(my_iscntrl('\a'), 1);
    cr_assert_eq(my_iscntrl('\0'), 1);
    cr_assert_eq(my_iscntrl(0x7F), 1);
}
