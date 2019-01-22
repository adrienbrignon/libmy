/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isgraph unit test.
*/

#include <criterion/criterion.h>

#include "my_ctype.h"

Test(ctype, my_isgraph)
{
    cr_assert_eq(my_isgraph(' '), 0);
    cr_assert_eq(my_isgraph('~'), 1);
    cr_assert_eq(my_isgraph('\0'), 0);
    cr_assert_eq(my_isgraph('\t'), 0);
    cr_assert_eq(my_isgraph('\n'), 0);
}
