/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_params_to_list unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_params_to_list)
{
    int argc = 2;
    char *argv[2] = {"Hello", "world"};

    linked_list_t *list = my_params_to_list(argc, argv);

    cr_assert_str_eq(list->data, "world");
    cr_assert_str_eq(list->next->data, "Hello");
    cr_assert_null(list->next->next);
}
