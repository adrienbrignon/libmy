/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the last ocurrence of the given char on the given string.
*/

#include "my_stddef.h"

char *my_strrchr(const char *str, char c)
{
    unsigned long last = 0;

    for (unsigned long i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            last = i;

    return (char *) &str[last];
}
