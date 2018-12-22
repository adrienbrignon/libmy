/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the character has a graphical representation.
*/

#include "my_ctype.h"

int my_isgraph(char c)
{
    return !my_iscntrl(c) && !my_isblank(c);
}
