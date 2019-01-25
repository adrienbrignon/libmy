/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Parse the specified string to a long.
*/

#include "my_ctype.h"
#include "my_stddef.h"

long long my_atoll(const char *str)
{
    my_size_t i = 0;
    signed char sign = 1;
    long long result = 0;

    while (my_isspace(str[i]))
        i++;
    if (str[i] == '+' || str[i] == '-')
        sign = str[i++] == '+' ? 1 : -1;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            break;

        result = result * 10 + str[i++] - '0';
    }

    return sign * result;
}
