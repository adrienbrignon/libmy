/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Allocate memory block.
*/

#include <stdlib.h>
#include "my_stddef.h"

void *my_malloc(my_size_t size)
{
    return malloc(size);
}
