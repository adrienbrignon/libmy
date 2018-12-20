/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given string only contains uppercase letters.
*/

#include "my.h"

int my_str_isupper(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!my_isupper(str[i]))
            return 0;

    return *str != '\0';
}
