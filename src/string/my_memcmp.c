/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compare two blocks of memory.
*/

#include "my_stddef.h"

int my_memcmp(const void *ptr1, const void *ptr2, my_size_t n)
{
    char *p1 = (char *) ptr1;
    char *p2 = (char *) ptr2;

    while (n-- > 0) {
        if (*p1 != *p2)
            return *p1 - *p2;

        p1++;
        p2++;
    }

    return 0;
}
