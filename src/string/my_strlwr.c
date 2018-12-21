/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Convert lowercase characters to uppercase.
*/

#include "my_ctype.h"
#include "my_stddef.h"

char *my_strlwr(char *str)
{
    for (my_size_t i = 0; str[i] != '\0'; i++)
        if (my_isupper(str[i]))
            str[i] = my_tolower(str[i]);

    return str;
}
