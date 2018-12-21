/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the length of initial segment not matching the given mask.
*/

#include "my_stddef.h"

my_size_t my_strcspn(const char *str, const char *mask)
{
    my_size_t i;

    for (i = 0; str[i] != '\0'; i++)
        for (my_size_t j = 0; mask[j] != '\0'; j++)
            if (str[i] == mask[j])
                return i;

    return i;
}
