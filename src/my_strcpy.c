/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Copy a string into another.
*/

char *my_strcpy(char *dest, char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        dest[i] = str[i];

        i++;
    }

    dest[i] = '\0';

    return dest;
}
