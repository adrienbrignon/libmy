/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Standard library definitions.
*/

#ifndef MY_STDLIB_H
#define MY_STDLIB_H

#include "my_config.h"
#include "my_stddef.h"

typedef struct my_div {
    int quot;
    int rem;
} my_div_t;

typedef struct my_ldiv {
    long quot;
    long rem;
} my_ldiv_t;

typedef struct my_lldiv {
    long long quot;
    long long rem;
} my_lldiv_t;

MY_API void my_free(void *ptr);

MY_API int my_abs(int x);
MY_API int my_atoi(const char *str);

MY_API long my_labs(long x);
MY_API long my_atol(const char *str);

MY_API long long my_llabs(long long n);
MY_API long long my_atoll(const char *str);

MY_API my_div_t my_div(int numer, int denom);
MY_API my_ldiv_t my_ldiv(long numer, long denom);
MY_API my_lldiv_t my_lldiv(long long numer, long long denom);

MY_API char *my_getenv(const char *name);
MY_API char *my_itoa(int n, char *buf, int base);
MY_API char *my_ltoa(long n, char *buf, int base);
MY_API char *my_lltoa(long long n, char *buf, int base);
MY_API char *my_ultoa(unsigned long n, char *buf, int base);

MY_API void *my_malloc(my_size_t size);
MY_API void *my_calloc(my_size_t n, my_size_t size);
MY_API void *my_realloc(void *src, my_size_t old_size, my_size_t size);

#endif
