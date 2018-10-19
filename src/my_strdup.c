/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Allocate memory and copy the given string in it.
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *str = malloc(my_strlen(src) + 1);

    if (!str) {
        return NULL;
    }

    my_strcpy(str, src);

    return str;
}
