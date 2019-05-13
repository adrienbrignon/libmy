/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Fill block of memory.
*/

#include "my_stddef.h"

void *my_memset(void *dest, int c, my_size_t size)
{
    unsigned char *ptr = (unsigned char *) dest;

    while (size-- > 0)
        *ptr++ = c;

    return dest;
}
