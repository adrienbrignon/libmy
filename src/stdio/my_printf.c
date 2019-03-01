/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Print formatted data.
*/

#include <stdarg.h>

#include "my_stdio.h"
#include "my_stddef.h"

int my_printf(const char *format, ...)
{
    int n = 0;
    va_list list;

    va_start(list, format);

    for (my_size_t i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '%') {
            n = n + my_printf_call(format[++i], &list);

            continue;
        }

        n = n + my_putchar(format[i]);
    }

    return n;
}
