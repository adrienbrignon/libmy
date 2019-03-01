/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The printf integer callback.
*/

#include <limits.h>

#include "my_stdio.h"
#include "my_stdlib.h"

int my_printf_callback_d(va_list *list)
{
    int n = va_arg(*list, int);
    char buf[(CHAR_BIT * sizeof n - 1) / 3 + 2];

    my_itoa(n, buf, 10);

    return my_printf(buf);
}
