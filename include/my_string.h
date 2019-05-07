/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The string-related functions
*/

#ifndef MY_STRING_H
#define MY_STRING_H

#include "my_config.h"
#include "my_stddef.h"

MY_API int my_strcmp(const char *str1, const char *str2);
MY_API int my_memcmp(const void *ptr1, const void *ptr2, my_size_t n);
MY_API int my_strncmp(const char *str1, const char *str2, my_size_t n);

MY_API my_size_t my_strlen(const char *str);
MY_API my_size_t my_strspn(const char *str, const char *mask);
MY_API my_size_t my_strcspn(const char *str, const char *mask);

MY_API void *my_memset(void *dest, char c, my_size_t size);
MY_API void *my_memcpy(void *dest, const void *src, my_size_t size);
MY_API void *my_memmove(void *dest, const void *src, my_size_t size);
MY_API void *my_memchr(const void *haystack, char needle, my_size_t size);

MY_API char *my_strrev(char *str);
MY_API char *my_strupr(char *str);
MY_API char *my_strlwr(char *str);
MY_API char *my_strdup(char const *src);
MY_API char *my_str_capitalize(char *str);
MY_API char *my_strset(char *str, int c);
MY_API char *my_strchr(const char *str, int c);
MY_API char *my_strrchr(const char *str, int c);
MY_API char *my_strcat(char *dest, const char *src);
MY_API char *my_strcpy(char *dest, const char *src);
MY_API char *my_strtok(char *str, const char *delim);
MY_API char *my_strndup(const char *src, my_size_t n);
MY_API char *my_strstr(char *haystack, const char *needle);
MY_API char *my_strncat(char *dest, const char *src, my_size_t n);
MY_API char *my_strncpy(char *dest, const char *src, my_size_t n);
MY_API char *my_strpbrk(const char *haystack, const char *list);

#endif
