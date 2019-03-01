/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Get the current process ID.
*/

#include <sys/syscall.h>

#include "my_unistd.h"

pid_t my_getpid(void)
{
    return syscall(SYS_getpid);
}
