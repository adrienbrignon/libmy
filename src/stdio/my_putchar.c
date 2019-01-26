/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Print a single character.
*/

#include "my_unistd.h"

int my_putchar(char c)
{
    return my_write(MY_STDOUT_FILENO, &c, 1);
}
