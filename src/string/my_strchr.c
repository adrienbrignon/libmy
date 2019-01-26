/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the first ocurrence of the given char on the given string.
*/

#include "my_stddef.h"

char *my_strchr(const char *str, char c)
{
    for (my_size_t i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return (char *) str + i;

    return MY_NULL;
}
