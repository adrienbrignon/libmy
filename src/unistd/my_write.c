/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Write on a file.
*/

#include <unistd.h>

#include "my_stddef.h"

my_ssize_t my_write(int fd, const void *buf, my_size_t n)
{
    return write(fd, buf, n);
}
