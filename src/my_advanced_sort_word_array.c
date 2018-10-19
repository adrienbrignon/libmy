/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Sort an array of words using the given function.
*/

#include "my.h"
#include <stdlib.h>

void my_advanced_sort_word_array(char **array, int (*cmp)(char const *, char const *))
{
    for (int i = 1; array[i] != NULL; i++) {
        if (cmp(array[i], array[i - 1]) < 0) {
            my_str_swap(&array[i], &array[i - 1]);

            i = 0;
        }
    }
}
