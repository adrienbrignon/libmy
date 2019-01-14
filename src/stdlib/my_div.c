/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Integral division.
*/

#include "my_stdlib.h"

my_div_t my_div(int numer, int denom)
{
    return (my_div_t) {numer / denom, numer % denom};
}
