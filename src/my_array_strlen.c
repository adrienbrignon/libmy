/*
** EPITECH PROJECT, 2018
** cheader
** File description:
** Get the total length of strings on array.
*/

#include "my.h"

int my_array_strlen(char * const *array, int size)
{
    int length = 0;

    for (int i = 0; i < size; i++) {
        length += my_strlen(array[i]);
    }

    return length;
}
