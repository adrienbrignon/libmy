/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get the given string length.
*/

#include "my_stddef.h"

my_size_t my_strlen(const char *str)
{
    my_size_t i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}
