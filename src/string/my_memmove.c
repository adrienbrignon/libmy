/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Move block of memory.
*/

#include "my_stddef.h"

void *my_memmove(void *dest, const void *src, my_size_t size)
{
    char *d = dest;
    const char *s = src;

    if (dest < src)
        while (size-- > 0)
            *d++ = *s++;
    else
        for (my_ssize_t i = size - 1; i >= 0; i--)
            d[i] = s[i];

    return dest;
}
