/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compare the given amount of characters in both strings.
*/

#include "my_string.h"

int my_strncmp(const char *str1, const char *str2, my_size_t n)
{
    for (my_size_t i = 0; i < n; i++)
        if (str1[i] != str2[i])
            return str1[i] - str2[i];

    return 0;
}
