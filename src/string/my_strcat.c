/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Concatenate two strings together.
*/

#include "my.h"

char *my_strcat(char *dest, const char *src)
{
    int j;
    int i = 0;

    while (dest[i] != '\0')
        i++;
    for (j = 0; src[j] != '\0'; j++)
        dest[i + j] = src[j];

    dest[i + j] = '\0';

    return dest;
}
