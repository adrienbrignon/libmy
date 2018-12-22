/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Standard I/O streams.
*/

#ifndef MY_STDIO_H_
#define MY_STDIO_H_

typedef enum flag {
    FLAG_NONE = 0,
    FLAG_ZERO = 2,
    FLAG_PLUS = 4,
    FLAG_SPACE = 8,
    FLAG_POUND = 16,
    FLAG_HYPHEN = 32
} flag_t;

typedef struct tag {
    int flags;
    int width;
    int precision;
    int length;
    char specifier;
} tag_t;

static const tag_t tags[] = {
    {FLAG_NONE, 0, 0, 0, 'x'},
    {FLAG_NONE, 0, 0, 0, 'x'},
    {FLAG_POUND, 0, 0, 0, 'X'},
};

int my_putchar(char c);
int my_puts(const char *str);

#endif
