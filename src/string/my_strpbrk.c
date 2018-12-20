/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Search a string for any of a set of characters.
*/

#include "my_stddef.h"

char *my_strpbrk(const char *haystack, const char *list)
{
    for (unsigned long i = 0; haystack[i] != '\0'; i++)
        for (unsigned long j = 0; list[j] != '\0'; j++)
            if (haystack[i] == list[j])
                return (char *) &haystack[i];

    return MY_NULL;
}