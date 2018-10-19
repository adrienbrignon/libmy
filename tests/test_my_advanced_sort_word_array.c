/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_advanced_sort_word_array unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_advanced_sort_word_array)
{
    char *array[] = {"Apple", "Zucchini", "Cat", "Corn", "Dog", NULL};

    my_advanced_sort_word_array(array, my_strcmp);

    cr_assert_str_eq(array[0], "Apple");
    cr_assert_str_eq(array[1], "Cat");
    cr_assert_str_eq(array[2], "Corn");
    cr_assert_str_eq(array[3], "Dog");
    cr_assert_str_eq(array[4], "Zucchini");
    cr_assert_null(array[5]);
}
