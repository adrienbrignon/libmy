/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Print a string using my_putchar.
*/

#include "my.h"

void my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str++);
    }
}
