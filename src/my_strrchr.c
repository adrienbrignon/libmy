/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the last ocurrence of the given char on the given string.
*/

char *my_strrchr(const char *str, char c)
{
    int last = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            last = i;

    return (char *) &str[last];
}
