/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Print a string using my_putchar.
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    return write(STDOUT_FILENO, str, my_strlen(str) * sizeof *str);
}
