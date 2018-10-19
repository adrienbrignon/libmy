/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_concat_list unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/criterion.h>

Test(unit, my_concat_list)
{
    linked_list_t one = {"Henlo lizer", NULL};
    linked_list_t two = {"Hello world!", &one};
    linked_list_t three = {"Henlo", NULL};
    linked_list_t four = {"Goodbye", &three};

    linked_list_t *first[2] = {&two, &one};
    linked_list_t *second[2] = {&four, &three};

    cr_assert_null((*first)->next->next);

    my_concat_list(first, *second);

    cr_assert_not_null((*first)->next->next);
    cr_assert_str_eq((*first)->next->next->data, "Goodbye");
    cr_assert_str_eq((*first)->next->next->next->data, "Henlo");
    cr_assert_null((*first)->next->next->next->next);
}
