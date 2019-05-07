/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Standard I/O streams.
*/

#ifndef MY_STDIO_H
#define MY_STDIO_H

#include <stdarg.h>

#include "my_config.h"

#ifndef MY_PRINTF_CALLBACK
#define MY_PRINTF_CALLBACK(x) (my_printf_callback_ ## x)
#endif

typedef int (my_printf_callback_t)(va_list *list);

typedef struct my_printf_map {
    char specifier;
    my_printf_callback_t *callback;
} my_printf_map_t;

MY_API int my_putchar(char c);
MY_API int my_puts(const char *str);
MY_API int my_printf(const char *format, ...);

MY_API int my_printf_call(char c, va_list *list);
MY_API int my_printf_callback_s(va_list *list);
MY_API int my_printf_callback_d(va_list *list);
MY_API int my_printf_callback_c(va_list *list);

#endif
