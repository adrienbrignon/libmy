/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Reallocate memory block.
*/

#include <stdlib.h>

#include "my_math.h"
#include "my_string.h"
#include "my_stdlib.h"

void *my_realloc(void *src, my_size_t old_size, my_size_t size)
{
    char *ptr = NULL;

    if (size == 0)
        return MY_NULL;
    if ((ptr = my_malloc(size)) == NULL || src == MY_NULL)
        return ptr;

    my_memmove(ptr, src, size < old_size ? size : old_size);
    my_free(src);

    return ptr;
}
