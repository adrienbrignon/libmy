/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Print a single character.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
