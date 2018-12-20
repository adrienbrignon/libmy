/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Reverse the specified string.
*/

#include "my.h"

char *my_strrev(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        char tmp = str[i];

        str[i++] = str[j];
        str[j--] = tmp;
    }

    return str;
}
