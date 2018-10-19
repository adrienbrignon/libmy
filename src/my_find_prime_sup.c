/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the nearest prime number of the specified number.
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    return my_isprime(nb) ? nb : my_find_prime_sup(nb + 1);
}
