/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compare the given amount of characters in both strings.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];

    return 0;
}
