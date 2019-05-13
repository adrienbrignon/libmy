/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Locate character in block of memory.
*/

#include "my_stddef.h"

void *my_memchr(const void *haystack, int needle, my_size_t size)
{
    const unsigned char *ptr = (const unsigned char *) haystack;

    while (size-- > 0) {
        if (*ptr == needle)
            return (void *) ptr;

        ptr++;
    }

    return MY_NULL;
}
