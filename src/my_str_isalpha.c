/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the given string only contains letters.
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!my_isalpha(str[i])) {
            return 0;
        }
    }

    return *str == '\0' ? 0 : 1;
}
