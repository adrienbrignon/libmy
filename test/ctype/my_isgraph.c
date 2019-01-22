/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isgraph unit test.
*/

#include "my_ctype.h"
#include <criterion/criterion.h>

Test(ctype, my_isgraph)
{
    cr_assert_eq(my_isgraph(' '), 0);
    cr_assert_eq(my_isgraph('~'), 1);
    cr_assert_eq(my_isgraph('\0'), 0);
    cr_assert_eq(my_isgraph('\t'), 0);
    cr_assert_eq(my_isgraph('\n'), 0);
}
