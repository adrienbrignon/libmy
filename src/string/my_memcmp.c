/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compare two blocks of memory.
*/

#include "my_stddef.h"

int my_memcmp(const void *ptr1, const void *ptr2, my_size_t n)
{
    const unsigned char *p1 = (const unsigned char *) ptr1;
    const unsigned char *p2 = (const unsigned char *) ptr2;

    while (n-- > 0) {
        if (*p1++ != *p2++)
            return p1[-1] < p2[-1] ? -1 : 1;
    }

    return 0;
}
