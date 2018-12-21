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
    if (src == MY_NULL)
        return MY_NULL;

    char *str = malloc(my_strlen(src) + 1);

    if (str == MY_NULL)
        return MY_NULL;

    return my_strcpy(str, src);
}
