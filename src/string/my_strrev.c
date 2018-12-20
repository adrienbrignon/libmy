/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Reverse the specified string.
*/

#include "my.h"

char *my_strrev(char *str)
{
    long i;
    long j;
    my_size_t len = my_strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        char tmp = str[i];

        str[i] = str[j];
        str[j] = tmp;
    }

    return str;
}
