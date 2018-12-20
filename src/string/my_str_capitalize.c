/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Capitalize the first letter of each word.
*/

#include "my.h"

static int is_delimiter(char c)
{
    char delimiters[6] = {' ', '\t', '\r', '\n', '\f', '\v'};

    for (int i = 0; i < 6; i++)
        if (c == delimiters[i])
            return 1;

    return 0;
}

char *my_str_capitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0)
            str[i] = my_toupper(str[i]);
        else if (is_delimiter(str[i]))
            str[i + 1] = my_toupper(str[i + 1]);
        else
            str[i + 1] = my_tolower(str[i + 1]);
    }

    return str;
}
