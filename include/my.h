/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The library main header.
*/

#ifndef _MY_H
#define _MY_H

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

void my_putnbr(int n);
void my_swap(int *a, int *b);

char my_tolower(char c);
char my_toupper(char c);

int my_ispos(int n);
int my_isneg(int n);
int my_isnum(char c);
int my_isprime(int n);
int my_putchar(char c);
int my_isalpha(char c);
int my_isupper(char c);
int my_islower(char c);
int my_min(int a, int b);
int my_max(int a, int b);
int my_isalphanum(char c);
int my_isprintable(char c);
int my_find_prime(int n);
int my_atoi(char const *str);
int my_puts(char const *str);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_sqrt(int n);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);
int my_pow(int n, int p);
int my_str_isalphanum(char const *str);
int my_str_isprintable(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);

long my_atol(char const *str);

char *my_revstr(char *str);
char *my_str_toupper(char *str);
char *my_str_tolower(char *str);
char *my_strdup(char const *src);
char *my_str_capitalize(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_strstr(char *haystack, char const *needle);
char *my_strncat(char *dest, char const *src, int n);
char *my_strncpy(char *dest, char const *src, int n);

#endif
