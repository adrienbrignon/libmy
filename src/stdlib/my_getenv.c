/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get environment string.
*/

#include "my_string.h"

char *my_getenv(const char *name)
{
    extern char **environ;
    my_size_t n = my_strlen(name);

    if (environ == MY_NULL || *name == '\0')
        return MY_NULL;
    for (my_size_t i = 0; environ[i] != MY_NULL; i++)
        if (my_strncmp(environ[i], name, n) == 0 && environ[i][n] == '=')
            return environ[i] + n + 1;

    return MY_NULL;
}
