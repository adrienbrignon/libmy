/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Copy the specified amount of characters into another string.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}
