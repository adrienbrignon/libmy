/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Return the division remainder.
*/

#include "my_math.h"

double my_fmod(double numer, double denom)
{
    return numer - denom * my_floor(numer / denom);
}
