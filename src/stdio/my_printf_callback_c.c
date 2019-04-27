/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The printf string callback.
*/

#include "my_stdio.h"
#include "my_string.h"
#include "my_unistd.h"

int my_printf_callback_c(va_list *list)
{
    char c = va_arg(*list, int);

    return my_write(MY_STDOUT_FILENO, &c, 1);
}
