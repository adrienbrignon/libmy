/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given character is printable.
*/

int my_isprintable(char c)
{
    return !(c < ' ' && c > '~');
}
