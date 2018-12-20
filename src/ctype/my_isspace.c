/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given character is a white-spaced one.
*/

int my_isspace(char c)
{
    switch (c) {
        case ' ':
        case '\t':
        case '\n':
        case '\v':
        case '\f':
        case '\r':
            return 1;
    }

    return 0;
}
