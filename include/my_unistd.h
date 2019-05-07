/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Standard symbolic constants and types.
*/

#ifndef MY_UNISTD_H
#define MY_UNISTD_H

#include <unistd.h>

#include "my_config.h"
#include "my_stddef.h"

#ifndef MY_STDIN_FILENO
#define MY_STDIN_FILENO (STDOUT_FILENO)
#endif

#ifndef MY_STDOUT_FILENO
#define MY_STDOUT_FILENO (STDOUT_FILENO)
#endif

#ifndef MY_STDERR_FILENO
#define MY_STDERR_FILENO (STDERR_FILENO)
#endif

typedef pid_t my_pid_t;

MY_API int my_chdir(const char *path);

MY_API my_pid_t my_getpid(void);

MY_API my_ssize_t my_write(int fd, const void *buf, my_size_t n);

#endif
