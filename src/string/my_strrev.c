/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Reverse the specified string.
*/

#include "my_string.h"

char *my_strrev(char *str)
{
    my_ssize_t i;
    my_ssize_t j;
    my_size_t len = my_strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        char tmp = str[i];

        str[i] = str[j];
        str[j] = tmp;
    }

    return str;
}
