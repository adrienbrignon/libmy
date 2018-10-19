/*
** EPITECH PROJECT, 2018
** project
** File description:
** Return the address of the first matching node.
*/

#include "my.h"
#include <stdlib.h>

linked_list_t *my_find_node(linked_list_t const *l, void const *c, int (*p)())
{
    while (l != NULL) {
        if (p(l->data, c) == 0) {
            return (linked_list_t *) l;
        }

        l = l->next;
    }

    return NULL;
}
