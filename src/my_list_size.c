/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get the size of the given list.
*/

#include "my.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *list)
{
    int i = 0;

    while (list != NULL) {
        i++;
        list = list->next;
    }

    return i;
}
