/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the nearest prime number starting from the given number.
*/

#include "my.h"

int my_find_prime(int nb)
{
    return my_isprime(nb) ? nb : my_find_prime(nb + 1);
}
