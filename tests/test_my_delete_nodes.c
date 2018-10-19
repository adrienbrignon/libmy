/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_delete_nodes unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/criterion.h>

Test(unit, my_delete_nodes)
{
    linked_list_t one = {"Henlo", NULL};
    linked_list_t two = {"Hi", &one};
    linked_list_t three = {"Hi", &two};
    linked_list_t four = {"Goodbye", &three};
    linked_list_t *list[4] = {&three, &four, &two, &one};

    my_delete_nodes(list, "Hi", my_strcmp);

    cr_assert_str_eq((*list)->next->data, "Henlo");
}
