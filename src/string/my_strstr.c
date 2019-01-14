/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find a substring on a string.
*/

#include "my_stddef.h"

char *my_strstr(char *needle, const char *haystack)
{
    my_size_t j = 0;

    for (my_size_t i = 0; needle[i] != '\0'; i++) {
        if (needle[i] == haystack[j]) {
            j++;
        } else {
            j = 0;
        }

        if (haystack[j] == '\0' && j > 0)
            return &needle[i - j + 1];
    }

    return *haystack == '\0' ? needle : MY_NULL;
}
