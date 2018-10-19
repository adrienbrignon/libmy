/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Create a linked list from command line arguments.
*/

#include "my.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int argc, char * const *argv)
{
    linked_list_t *list = NULL;

    for (int i = 0; i < argc; i++) {
        linked_list_t *current = malloc(sizeof *current);

        current->data = argv[i];
        current->next = list;
        list = current;
    }

    return list;
}
