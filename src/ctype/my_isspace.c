/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given character is a white-spaced one.
*/

int my_isspace(char c)
{
    return c == ' '
        || c == '\t'
        || c == '\n'
        || c == '\v'
        || c == '\f'
        || c == '\r';
}
