/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_count_words unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_count_words)
{
    cr_assert_eq(my_count_words(""), 0);
    cr_assert_eq(my_count_words("hello"), 1);
    cr_assert_eq(my_count_words("hello world!"), 2);
    cr_assert_eq(my_count_words("hello+world."), 2);
    cr_assert_eq(my_count_words("hello+world_."), 2);
    cr_assert_eq(my_count_words("h.e.l.l.o w.o.r.l.d."), 10);
}
