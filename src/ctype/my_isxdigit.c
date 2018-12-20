/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given character is an hexadecimal digit.
*/

#include "my_ctype.h"

int my_isxdigit(char c)
{
    return my_isdigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f');
}
