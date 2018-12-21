/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Copy block of memory.
*/

#include "my_stddef.h"

void *my_memcpy(void *dest, const void *src, my_size_t size)
{
    char *d = dest;
    const char *s = src;

    while (size-- > 0)
        *d++ = *s++;

    return dest;
}
