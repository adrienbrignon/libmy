/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get the given string length.
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i;
}
