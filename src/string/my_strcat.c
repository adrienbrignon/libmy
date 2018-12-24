/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Concatenate two strings together.
*/

#include "my_string.h"

char *my_strcat(char *dest, const char *src)
{
    char *ptr = dest + my_strlen(dest);

    while (*src != '\0')
        *ptr++ = *src++;

    *ptr = '\0';

    return dest;
}
