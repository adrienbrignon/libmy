/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the first ocurrence of the given char on the given string.
*/

char *my_strchr(const char *str, char c)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != c)
        i++;

    return (char *) &str[i];
}
