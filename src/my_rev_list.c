/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Reverse the list elements order.
*/

#include "my.h"
#include <stdlib.h>

void my_rev_list(linked_list_t **list)
{
    linked_list_t *next = NULL;
    linked_list_t *prev = NULL;
    linked_list_t *current = *list;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *list = prev;
}
