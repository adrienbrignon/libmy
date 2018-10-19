/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_find_node unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/criterion.h>

Test(unit, my_find_node)
{
    linked_list_t one = {"Henlo", NULL};
    linked_list_t two = {"Hi", &one};
    linked_list_t three = {"Goodbye", &two};

    linked_list_t *found = my_find_node(&three, "Hi", my_strcmp);
    linked_list_t *not_found = my_find_node(&three, "Rawr", my_strcmp);

    cr_assert_str_eq(found->data, two.data);
    cr_assert_null(not_found);
}
