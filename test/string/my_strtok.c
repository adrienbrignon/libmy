/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strtok unit test.
*/

#include <criterion/criterion.h>

#include "my_string.h"

Test(string, my_strtok)
{
    char empty[] = "";
    char str[] = "Hello, how are you? Fine!";

    cr_assert_str_eq(my_strtok(str, " ,?"), "Hello");
    cr_assert_str_eq(my_strtok(MY_NULL, " ,?"), "how");
    cr_assert_str_eq(my_strtok(MY_NULL, " ,?"), "are");
    cr_assert_str_eq(my_strtok(MY_NULL, " ,?"), "you");
    cr_assert_str_eq(my_strtok(MY_NULL, " ,?"), "Fine!");
    cr_assert_null(my_strtok(MY_NULL, " ,?"));
    cr_assert_null(my_strtok(MY_NULL, " ,?"));
    cr_assert_null(my_strtok(empty, " ,?"));
}
