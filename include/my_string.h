/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The string-related functions
*/

#ifndef MY_STRING_H_
#define MY_STRING_H_

typedef unsigned long my_size_t;

char *my_strrev(char *str);
char *my_strupr(char *str);
char *my_strlwr(char *str);
char *my_itoa(int n, char *buf);
char *my_ltoa(long n, char *buf);
char *my_strdup(char const *src);
char *my_str_capitalize(char *str);
char *my_strset(char *str, char c);
char *my_strchr(const char *str, char c);
char *my_strrchr(const char *str, char c);
char *my_strcat(char *dest, const char *src);
char *my_strcpy(char *dest, const char *src);
char *my_strstr(char *haystack, const char *needle);
char *my_strncat(char *dest, const char *src, int n);
char *my_strncpy(char *dest, const char *src, int n);
char *my_strpbrk(const char *haystack, const char *list);

#endif
