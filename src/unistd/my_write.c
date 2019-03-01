/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Write on a file.
*/

#include <sys/syscall.h>

#include "my_unistd.h"

my_ssize_t my_write(int fd, const void *buf, my_size_t n)
{
    return syscall(SYS_write, fd, buf, n);
}
