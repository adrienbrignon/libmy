/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Copy the specified amount of characters into another string.
*/

#include "my_stddef.h"

char *my_strncpy(char *dest, const char *src, my_size_t n)
{
    my_size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = '\0';

    return dest;
}
