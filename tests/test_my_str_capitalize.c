/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_str_capitalize unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_str_capitalize)
{
    char str1[] = "Hello world!";
    char str2[] = "a+b=c";

    cr_assert_str_eq(my_str_capitalize(str1), "Hello World!");
    cr_assert_str_eq(my_str_capitalize(str2), "A+B=c");
}
