/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** String operations.
*/

#ifndef MY_STRINGS_H
#define MY_STRINGS_H

#include "my_config.h"
#include "my_stddef.h"

MY_API int my_strcasecmp(const char *s1, const char *s2);
MY_API int my_strncasecmp(const char *s1, const char *s2, my_size_t n);

MY_API char *my_index(const char *str, char c);
MY_API char *my_rindex(const char *str, char c);

#endif
