/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get the given string length.
*/

#include "my_string.h"

my_size_t my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}
