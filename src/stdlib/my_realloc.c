/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Reallocate memory block.
*/

#include <stdlib.h>

#include "my_math.h"
#include "my_string.h"

void *my_realloc(void *src, my_size_t old_size, my_size_t size)
{
    if (size == 0)
        return MY_NULL;

    char *ptr = malloc(size);

    if (ptr == MY_NULL || src == MY_NULL)
        return ptr;

    my_memmove(ptr, src, old_size);
    free(src);

    return ptr;
}