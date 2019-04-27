/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Standard I/O streams.
*/

#include <stdarg.h>

#ifndef MY_STDIO_H_
#define MY_STDIO_H_

#define MY_PRINTF_CALLBACK(x) (my_printf_callback_ ## x)

typedef int (my_printf_callback_t)(va_list *list);

typedef struct my_printf_map {
    char specifier;
    my_printf_callback_t *callback;
} my_printf_map_t;

int my_putchar(char c);
int my_puts(const char *str);
int my_printf(const char *format, ...);

int my_printf_call(char c, va_list *list);
int my_printf_callback_s(va_list *list);
int my_printf_callback_d(va_list *list);
int my_printf_callback_c(va_list *list);

#endif
