/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Concatenate two strings together.
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i++;
    for (; src[j] != '\0'; j++)
        dest[i + j] = src[j];

    dest[i + j] = '\0';

    return dest;
}
