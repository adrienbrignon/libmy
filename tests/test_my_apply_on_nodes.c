/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_apply_on_nodes unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/redirect.h>
#include <criterion/criterion.h>

Test(unit, my_apply_on_nodes, .init = redirect_all_std)
{
    linked_list_t list = {"Hello world!", NULL};

    my_apply_on_nodes(&list, my_putstr);

    cr_assert_stdout_eq_str("Hello world!");
}
