/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Count amout of words on the given string.
*/

#include "my.h"

int my_count_words(char const *str)
{
    int words = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_isalphanum(str[i])) {
            continue;
        }

        if (my_isalpha(str[i + 1]) || my_isnum(str[i + 1])) {
            words++;
        }
    }

    return *str == '\0' ? 0 : words + 1;
}
