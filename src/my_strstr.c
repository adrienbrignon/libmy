/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find a substring on a string.
*/

#include <stdlib.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[j]) {
            j++;
        } else {
            j = 0;
        }

        if (to_find[j] == '\0' && j >= 1) {
            return &str[i - j + 1];
        }

        i++;
    }

    return *to_find == '\0' ? str : NULL;
}
