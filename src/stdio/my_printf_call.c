/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Call printf callback from specifier.
*/

#include "my_stdio.h"
#include "my_stddef.h"

const my_printf_map_t map[] = {
    {'s', MY_PRINTF_CALLBACK(s)},
    {'d', MY_PRINTF_CALLBACK(d)},
    {'i', MY_PRINTF_CALLBACK(d)},
    {'c', MY_PRINTF_CALLBACK(c)}
};

int my_printf_call(char c, va_list *list)
{
    for (my_size_t i = 0; i < 4; i++) {
        if (map[i].specifier == c)
            return map[i].callback(list);
    }

    return my_putchar('%') + my_putchar(c);
}
