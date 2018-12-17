/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Our own implementation of the puts function.
*/

#include "my.h"

int my_puts(char const *str)
{
    return my_putstr(str) + my_putchar('\n');
}
