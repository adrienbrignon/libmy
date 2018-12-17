/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Print a single character.
*/

#include <unistd.h>

int my_putchar(char c)
{
    return write(STDOUT_FILENO, &c, sizeof c);
}
