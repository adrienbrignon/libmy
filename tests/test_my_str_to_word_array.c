/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_to_word_array unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_to_word_array)
{
    char **array = my_str_to_word_array("I have twenty-one cats.");

    cr_assert_str_eq(array[0], "I");
    cr_assert_str_eq(array[1], "have");
    cr_assert_str_eq(array[2], "twenty");
    cr_assert_str_eq(array[3], "one");
    cr_assert_str_eq(array[4], "cats");
    cr_assert_null(array[5]);
}
