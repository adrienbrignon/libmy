/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Convert lowercase characters to uppercase.
*/

#include "my.h"

char *my_str_tolower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_isupper(str[i])) {
            str[i] = my_tolower(str[i]);
        }
    }

    return str;
}
