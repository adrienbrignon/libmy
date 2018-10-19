/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Convert lowercase characters to uppercase.
*/

#include "my.h"

char *my_str_toupper(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_islower(str[i])) {
            str[i] = my_toupper(str[i]);
        }
    }

    return str;
}
