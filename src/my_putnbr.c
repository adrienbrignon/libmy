/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Print the specified number.
*/

#include "my.h"

static void print_digits(int nb)
{
    int digit = nb % 10;

    if (nb >= 10 || nb <= -10)
        print_digits(nb / 10);
    if (digit < 0)
        digit = digit * -1;

    my_putchar(digit + '0');
}

void my_putnbr(int nb)
{
    if (nb < 0)
        my_putchar('-');

    print_digits(nb);
}
