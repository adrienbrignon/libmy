/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Locate first occurrence of character in string.
*/

#include "my_string.h"

char *my_index(const char *str, char c)
{
    return my_strchr(str, c);
}
