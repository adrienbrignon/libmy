/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given string is printable.
*/

#include "my.h"

int my_str_isprint(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!my_isprint(str[i]))
            return 0;

    return *str != '\0';
}
