/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Locate character in block of memory.
*/

#include "my_stddef.h"

void *my_memchr(const void *haystack, char needle, my_size_t size)
{
    unsigned char *ptr = (unsigned char *) haystack;

    while (size-- > 0) {
        if (*ptr == (unsigned char) needle)
            return ptr;

        ptr++;
    }

    return MY_NULL;
}
