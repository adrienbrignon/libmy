/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Copy sign.
*/

#include "my_math.h"

double my_copysign(double x, double y)
{
    return y < 0 ? -my_fabs(x) : my_fabs(x);
}
