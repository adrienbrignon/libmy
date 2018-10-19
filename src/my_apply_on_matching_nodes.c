/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Apply the given function on each matching node.
*/

#include "my.h"
#include <stdlib.h>

void my_apply_on_matching_nodes(linked_list_t *list, void (*f)(), void const *query, int (*cmp)())
{
    while (list != NULL) {
        if (cmp(list->data, query) == 0) {
            f(list->data);
        }

        list = list->next;
    }
}
