/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compare two piece of strings together.
*/

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;

    return s1[i] - s2[i];
}
