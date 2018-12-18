/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Convert a long to string.
*/

#include "my.h"

char *my_ltoa(long n, char *buf)
{
    int i = 0;
    int neg = 0;

    if (n < 0) {
        n = -n;
        neg = 1;
    }

    do {
        buf[i++] = n % 10 + '0';
        n = n / 10;
    } while (n != 0);

    if (neg)
        buf[i++] = '-';

    buf[i] = '\0';

    return my_revstr(buf);
}
