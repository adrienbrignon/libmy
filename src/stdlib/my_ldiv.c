/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Integral division.
*/

#include "my_stdlib.h"

my_ldiv_t my_ldiv(long numer, long denom)
{
    return (my_ldiv_t) {numer / denom, numer % denom};
}
