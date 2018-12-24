/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the length of initial segment not matching the given mask.
*/

#include "my_string.h"

my_size_t my_strspn(const char *str, const char *mask)
{
    my_size_t i = 0;

    while (my_strchr(mask, str[i]) != MY_NULL)
        i++;

    return i;
}
