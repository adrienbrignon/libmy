/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_list_size unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_list_size)
{
    int argc = 4;
    char *argv[4] = {"Hello", "world", "foo", "bar"};

    linked_list_t *list = my_params_to_list(argc, argv);

    cr_assert_eq(my_list_size(list), 4);
}
