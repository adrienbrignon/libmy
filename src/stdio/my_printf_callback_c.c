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
    return my_write(MY_STDOUT_FILENO, &(int) {va_arg(*list, int)}, 1);
}
