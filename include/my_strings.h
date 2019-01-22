/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** String operations.
*/

#include "my_stddef.h"

#ifndef MY_STRINGS_H_
#define MY_STRINGS_H_

int my_strcasecmp(const char *s1, const char *s2);
int my_strncasecmp(const char *s1, const char *s2, my_size_t n);

char *my_index(const char *str, char c);
char *my_rindex(const char *str, char c);

#endif
