/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get an array of words from a string.
*/

#include "my.h"
#include <stdlib.h>

char **my_str_to_word_array(char const *str)
{
    int j = 0;
    int letters = 0;
    char **array = malloc(sizeof (char *) * (my_count_words(str) + 1));

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_isalpha(str[i])) {
            letters++;
        } else if (letters > 0) {
            array[j] = malloc(sizeof (char) * letters + 1);

            my_strncpy(array[j], str + i - letters, letters);

            letters = 0;
            j++;
        }
    }

    array[j] = NULL;

    return array;
}
