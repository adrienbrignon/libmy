/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get the square root of the specified number.
*/

#include "my_math.h"

double my_sqrt(double nb)
{
    double estimate = nb;
    double epsilon = 1e-9;

    while (my_fabs(nb - estimate / nb) > epsilon * nb)
        nb = (estimate / nb + nb) / 2;

    return nb;
}
