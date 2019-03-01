/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Change working directory.
*/

#include <sys/syscall.h>

#include "my_unistd.h"

int my_chdir(const char *path)
{
    return syscall(SYS_chdir, path);
}
