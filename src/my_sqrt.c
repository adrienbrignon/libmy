/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get the square root of the specified number.
*/

#include "my.h"

int my_sqrt(int nb)
{
    for (int n = 0; n <= nb; n++)
        if (n * n == nb)
            return n;

    return 0;
}
