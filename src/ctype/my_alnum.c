/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given char is alphanumeric.
*/

#include "my_ctype.h"

int my_isalnum(char c)
{
    return my_isalpha(c) || my_isdigit(c);
}
