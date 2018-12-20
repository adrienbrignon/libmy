/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Concatenate two strings together starting at the given position.
*/

#include "my.h"

char *my_strncat(char *dest, const char *src, my_size_t n)
{
    unsigned long i;
    my_size_t length = my_strlen(dest);

    for (i = 0 ; i < n && src[i] != '\0'; i++)
        dest[length + i] = src[i];

    dest[length + i] = '\0';

    return dest;
}
