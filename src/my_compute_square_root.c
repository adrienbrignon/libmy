/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get the square root of the specified number.
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    for (int n = 0; n < nb; n++) {
        if (n * n == nb) {
            return n;
        }
    }

    return nb == 1 ? 1 : 0;
}
