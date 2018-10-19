/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Sort an array of integers.
*/

#include "my.h"

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        if (array[i] < array[i - 1]) {
            my_swap(&array[i], &array[i - 1]);

            i = 0;
        }
    }
}
