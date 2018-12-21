/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Copy a string into another.
*/

#include "my_stddef.h"

char *my_strcpy(char *dest, const char *str)
{
    my_size_t i;

    for (i = 0; str[i] != '\0'; i++)
        dest[i] = str[i];

    dest[i] = '\0';

    return dest;
}
