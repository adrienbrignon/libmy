/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Allocate memory and copy the given string in it.
*/

#include "my.h"
#include <stdlib.h>
#include "my_stddef.h"

char *my_strdup(const char *src)
{
    char *str = malloc(my_strlen(src) + 1);

    if (str == MY_NULL)
        return str;

    return my_strcpy(str, src);
}
