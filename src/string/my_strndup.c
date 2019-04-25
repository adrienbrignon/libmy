/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Allocate memory and copy the given string in it.
*/

#include "my_stdlib.h"
#include "my_string.h"

char *my_strndup(const char *src, my_size_t n)
{
    char *str = MY_NULL;

    if ((str = my_malloc(n + 1)) == MY_NULL)
        return MY_NULL;

    return my_strncpy(str, src, n);
}
