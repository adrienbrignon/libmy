/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Put the given character in uppercase.
*/

#include "my.h"

char my_toupper(char c)
{
    return my_islower(c) ? c - 0x20 : c;
}
