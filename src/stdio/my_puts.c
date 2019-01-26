/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Our own implementation of the puts function.
*/

#include "my_stdio.h"
#include "my_string.h"
#include "my_unistd.h"

int my_puts(const char *str)
{
    return my_write(MY_STDOUT_FILENO, str, my_strlen(str)) + my_putchar('\n');
}
