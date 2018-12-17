/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Parse the specified string to a long.
*/

long my_atol(char const *str)
{
    int i = 0;
    int sign = 1;
    long result = 0;

    while (str[i] == '+' || str[i] == '-')
        sign *= str[i++] == '+' ? 1 : -1;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            break;

        result = result * 10 + str[i++] - '0';
    }

    return sign * result;
}
