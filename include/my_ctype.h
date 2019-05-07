/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Character handling functions.
*/

#ifndef MY_CTYPE_H
#define MY_CTYPE_H

#include "my_config.h"

MY_API int my_isalnum(char c);
MY_API int my_isdigit(char c);
MY_API int my_isalpha(char c);
MY_API int my_isupper(char c);
MY_API int my_isblank(char c);
MY_API int my_islower(char c);
MY_API int my_isprint(char c);
MY_API int my_isspace(char c);
MY_API int my_iscntrl(char c);
MY_API int my_isgraph(char c);
MY_API int my_ispunct(char c);
MY_API int my_isxdigit(char c);

MY_API char my_tolower(char c);
MY_API char my_toupper(char c);

#endif
