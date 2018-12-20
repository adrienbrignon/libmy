/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Round to the nearest integral.
*/

#include "my_math.h"

double my_round(double x)
{
    return my_fabs(x - (long) x) < 0.5 ? (long) x : (long) x + (x > 0 ? 1 : -1);
}
