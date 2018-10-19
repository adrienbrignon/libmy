/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_rev_list unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_rev_list)
{
    int argc = 2;
    char *argv[2] = {"Hello", "world"};

    linked_list_t *list = my_params_to_list(argc, argv);

    my_rev_list(&list);

    cr_assert_str_eq(list->data, "Hello");
    cr_assert_str_eq(list->next->data, "world");
    cr_assert_null(list->next->next);
}
