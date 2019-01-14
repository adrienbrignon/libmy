/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Integral division.
*/

#include "my_stdlib.h"

my_lldiv_t my_lldiv(long long numer, long long denom)
{
    return (my_lldiv_t) {numer / denom, numer % denom};
}
