/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The printf string callback.
*/

#include "my_stdio.h"
#include "my_string.h"
#include "my_unistd.h"

int my_printf_callback_s(va_list *list)
{
    char *str = va_arg(*list, char *);

    return my_write(MY_STDOUT_FILENO, str, my_strlen(str));
}
