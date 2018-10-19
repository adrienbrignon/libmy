/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_apply_on_matching_nodes unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/redirect.h>
#include <criterion/criterion.h>

Test(unit, my_apply_on_matching_nodes, .init = redirect_all_std)
{
    linked_list_t one = {"Henlo lizer", NULL};
    linked_list_t two = {"Hello world!", &one};
    linked_list_t three = {"Goodbye", &two};

    my_apply_on_matching_nodes(&three, my_putstr, "Henlo lizer", my_strcmp);

    cr_assert_stdout_eq_str("Henlo lizer");
}
