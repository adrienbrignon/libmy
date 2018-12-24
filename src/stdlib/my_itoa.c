/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Convert an integer number to string.
*/

#include "my_string.h"

char *my_itoa(int n, char *buf, int base)
{
    my_size_t i = 0;
    signed char neg = 0;

    if (n < 0) {
        n = -n;
        neg = 1;
    }

    do {
        buf[i++] = n % base < 10 ? n % base + '0' : n % base - 10 + 'a';
        n = n / base;
    } while (n != 0);

    if (neg)
        buf[i++] = '-';

    buf[i] = '\0';

    return my_strrev(buf);
}
