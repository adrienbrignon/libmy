/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Our own implementation of the puts function.
*/

#include "my.h"
#include <unistd.h>

int my_puts(const char *str)
{
    return write(MY_STDOUT_FILENO, str, my_strlen(str)) + my_putchar('\n');
}
