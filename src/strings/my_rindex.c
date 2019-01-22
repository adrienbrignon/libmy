/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Locate last occurrence of character in string.
*/

#include "my_string.h"

char *my_rindex(const char *str, char c)
{
    return my_strrchr(str, c);
}
