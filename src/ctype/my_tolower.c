/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Put the given chararacter in lowercase.
*/

#include "my.h"

char my_tolower(char c)
{
    return my_isupper(c) ? c + 0x20 : c;
}
