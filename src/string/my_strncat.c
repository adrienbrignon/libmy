/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Concatenate two strings together starting at the given position.
*/

#include "my_string.h"

char *my_strncat(char *dest, const char *src, my_size_t n)
{
    char *end = dest + my_strlen(dest);

    while (*src != '\0' && n-- > 0)
        *end++ = *src++;

    *end = '\0';

    return dest;
}
