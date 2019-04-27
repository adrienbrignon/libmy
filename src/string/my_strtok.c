/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Split string into tokens.
*/

#include "my_string.h"

char *my_strtok(char *str, const char *delim)
{
    static char *ptr = MY_NULL;

    if (str != MY_NULL)
        ptr = str;
    else if (ptr == MY_NULL)
        return ptr;

    str = ptr + my_strspn(ptr, delim);
    ptr = str + my_strcspn(str, delim);

    if (ptr == str)
        return (ptr = MY_NULL);
    else if (*ptr != '\0')
        *ptr++ = '\0';

    return str;
}
