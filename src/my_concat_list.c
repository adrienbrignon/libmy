/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Concatenate two lists.
*/

#include "my.h"
#include <stdlib.h>

void my_concat_list(linked_list_t **list, linked_list_t *to_add)
{
    linked_list_t *actual = *list;

    while (actual->next != NULL) {
        actual = actual->next;
    }

    while (to_add->next != NULL) {
        actual->next = to_add;
        to_add = to_add->next;
    }
}
