/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Convert an unsigned long number to string.
*/

#include "my_string.h"

char *my_ultoa(unsigned long n, char *buf, int base)
{
    my_size_t i = 0;

    do {
        buf[i++] = n % base < 10 ? n % base + '0' : n % base - 10 + 'a';
        n = n / base;
    } while (n != 0);

    buf[i] = '\0';

    return my_strrev(buf);
}
