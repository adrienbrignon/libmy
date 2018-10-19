/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given char is alphanumeric.
*/

#include "my.h"

int my_isalphanum(char c)
{
    return my_isalpha(c) || my_isnum(c);
}
