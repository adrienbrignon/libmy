/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Return the given number multiplied by two raised to the power of exponent.
*/

#include "my_math.h"

double my_ldexp(double x, int exp)
{
    return x * my_pow(2, exp);
}
