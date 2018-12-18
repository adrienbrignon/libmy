/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Copy a string into another.
*/

char *my_strcpy(char *dest, char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        dest[i] = str[i];

    dest[i] = '\0';

    return dest;
}
