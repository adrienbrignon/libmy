/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Character handling functions.
*/

#ifndef MY_CTYPE_H_
#define MY_CTYPE_H_

int my_isalnum(char c);
int my_isdigit(char c);
int my_isalpha(char c);
int my_isupper(char c);
int my_isblank(char c);
int my_islower(char c);
int my_isprint(char c);
int my_isspace(char c);
int my_iscntrl(char c);
int my_isgraph(char c);
int my_ispunct(char c);
int my_isxdigit(char c);

char my_tolower(char c);
char my_toupper(char c);

#endif
