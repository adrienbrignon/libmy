/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Standard symbolic constants and types.
*/

#include "my_stddef.h"

#ifndef MY_UNISTD_H_
#define MY_UNISTD_H_

#define MY_STDIN_FILENO (0)
#define MY_STDOUT_FILENO (1)
#define MY_STDERR_FILENO (2)

my_ssize_t my_write(int fd, const void *buf, my_size_t n);

#endif
