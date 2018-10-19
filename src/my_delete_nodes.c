/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Delete nodes matching the specified criteria.
*/

#include "my.h"
#include <stdlib.h>

void my_delete_nodes(linked_list_t **list, void const *criteria, int (*cmp)())
{
    linked_list_t *current = *list;

    while (current->next != NULL) {
        if (cmp(current->next->data, criteria) == 0) {
            current->next = current->next->next;
        }

        current = current->next;
    }
}
