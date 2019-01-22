/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strstr unit test.
*/

#include "my_string.h"
#include <criterion/criterion.h>

Test(string, my_strstr)
{
    char lorem[] = "Lorem ipsum dolor sit amet.";

    cr_assert_null(my_strstr(lorem, "hello"));
    cr_assert_str_eq(my_strstr(lorem, "."), ".");
    cr_assert_str_eq(my_strstr(lorem, ""), lorem);
    cr_assert_str_eq(my_strstr(lorem, "dolor"), "dolor sit amet.");
}
