/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Change working directory.
*/

#include "my_unistd.h"

int my_chdir(const char *path)
{
    return chdir(path);
}
