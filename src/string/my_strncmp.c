/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compare two piece of strings together.
*/

#include "my_stddef.h"

int my_strncmp(const char *s1, const char *s2, my_size_t n)
{
    my_size_t i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && --n > 0)
        i++;

    return s1[i] - s2[i];
}
