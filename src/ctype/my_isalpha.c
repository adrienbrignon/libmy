/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given char is a letter.
*/

int my_isalpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
