/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the last ocurrence of the given char on the given string.
*/

#include <stdlib.h>

#include "my_string.h"

char *my_strrchr(const char *str, int c)
{
    for (my_ssize_t i = my_strlen(str) - 1; i >= 0; i--) {
        if (str[i] == c)
            return (char *) str + i;
    }

    return MY_NULL;
}
