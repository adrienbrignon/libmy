/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Sort an array of words using my_strcmp.
*/

#include "my.h"
#include <stdlib.h>

void my_sort_word_array(char **tab)
{
    for (int i = 1; tab[i] != NULL; i++) {
        if (my_strcmp(tab[i], tab[i - 1]) < 0) {
            my_str_swap(&tab[i], &tab[i - 1]);

            i = 1;
        }
    }
}
