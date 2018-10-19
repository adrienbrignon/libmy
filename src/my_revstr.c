/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Reverse the specified string.
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    char letter;
    int j = my_strlen(str) - 1;

    while (i < j) {
        letter = str[i];
        str[i++] = str[j];
        str[j--] = letter;
    }

    return str;
}
