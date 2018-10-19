/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Display the content of an array of words.
*/

#include "my.h"

void my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
