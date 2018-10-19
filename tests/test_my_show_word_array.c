/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_show_word_array unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/redirect.h>
#include <criterion/criterion.h>

Test(unit, my_show_word_array, .init = redirect_all_std)
{
    char *array[] = {
        "I",
        "like",
        "trains.",
        0
    };

    my_show_word_array(array);

    cr_assert_stdout_eq_str("I\nlike\ntrains.\n");
}
