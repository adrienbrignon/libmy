/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Set all characters of the string to the given character.
*/

#include "my.h"

char *my_strset(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = c;

    return str;
}
