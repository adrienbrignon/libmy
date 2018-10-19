/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Apply the given function to the data of each node.
*/

#include "my.h"
#include <stdlib.h>

void my_apply_on_nodes(linked_list_t *list, void (*f)(void const *))
{
    while (list != NULL) {
        f(list->data);

        list = list->next;
    }
}
