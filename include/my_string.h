/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The string-related functions
*/

#ifndef MY_STRING_H_
#define MY_STRING_H_

#include "my_stddef.h"

int my_strcmp(const char *str1, const char *str2);
int my_memcmp(const void *ptr1, const void *ptr2, my_size_t n);
int my_strncmp(const char *str1, const char *str2, my_size_t n);

void *my_memset(void *dest, char c, my_size_t size);
void *my_memcpy(void *dest, const void *src, my_size_t size);
void *my_memmove(void *dest, const void *src, my_size_t size);
void *my_memchr(const void *haystack, char needle, my_size_t size);

char *my_strrev(char *str);
char *my_strupr(char *str);
char *my_strlwr(char *str);
char *my_strdup(char const *src);
char *my_str_capitalize(char *str);
char *my_strset(char *str, int c);
char *my_strchr(const char *str, int c);
char *my_strrchr(const char *str, int c);
char *my_strcat(char *dest, const char *src);
char *my_strcpy(char *dest, const char *src);
char *my_strtok(char *str, const char *delim);
char *my_strndup(const char *src, my_size_t n);
char *my_strstr(char *haystack, const char *needle);
char *my_strncat(char *dest, const char *src, my_size_t n);
char *my_strncpy(char *dest, const char *src, my_size_t n);
char *my_strpbrk(const char *haystack, const char *list);

my_size_t my_strlen(const char *str);
my_size_t my_strspn(const char *str, const char *mask);
my_size_t my_strcspn(const char *str, const char *mask);

#endif
