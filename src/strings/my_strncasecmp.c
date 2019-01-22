/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compare strings without case censitivity.
*/

#include "my_ctype.h"
#include "my_stddef.h"

int my_strncasecmp(const char *s1, const char *s2, my_size_t n)
{
    my_size_t i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && n--) {
        if (my_toupper(s1[i]) != my_toupper(s2[i]))
            break;

        i++;
    }

    return my_toupper(s1[i]) - my_toupper(s2[i]);
}
