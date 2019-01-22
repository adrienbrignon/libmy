/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Allocate and zero-initialize array.
*/

#include <stdlib.h>

#include "my_string.h"

void *my_calloc(my_size_t n, my_size_t size)
{
    void *ptr = MY_NULL;

    if (n * size == 0 || (ptr = malloc(n * size)) == MY_NULL)
        return MY_NULL;

    return my_memset(ptr, '\0', size);
}
