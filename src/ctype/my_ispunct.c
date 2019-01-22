/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given character is a punctuation character.
*/

int my_ispunct(char c)
{
    return (c >= '!' && c <= '/')
        || (c >= ':' && c <= '@')
        || (c >= '[' && c <= '`')
        || (c >= '{' && c <= '~');
}
