/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Fill block of memory.
*/

#include "my_stddef.h"

void *my_memset(void *dest, char c, my_size_t size)
{
    unsigned char *ptr = dest;

    while (size-- > 0)
        *ptr++ = (unsigned char) c;

    return dest;
}
