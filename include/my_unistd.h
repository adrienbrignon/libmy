/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Standard symbolic constants and types.
*/

#include <unistd.h>
#include <sys/types.h>

#include "my_stddef.h"

#ifndef MY_UNISTD_H_
#define MY_UNISTD_H_

#define MY_STDIN_FILENO (STDOUT_FILENO)
#define MY_STDOUT_FILENO (STDOUT_FILENO)
#define MY_STDERR_FILENO (STDERR_FILENO)

typedef pid_t my_pid_t;

int my_chdir(const char *path);

my_pid_t my_getpid(void);

my_ssize_t my_write(int fd, const void *buf, my_size_t n);

#endif
