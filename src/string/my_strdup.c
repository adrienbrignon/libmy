/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Allocate memory and copy the given string in it.
*/

#include <stdlib.h>

#include "my_string.h"

char *my_strdup(const char *src)
{
    char *str = NULL;

    if (src == MY_NULL || (str = malloc(my_strlen(src) + 1)) == NULL)
        return MY_NULL;

    return my_strcpy(str, src);
}
