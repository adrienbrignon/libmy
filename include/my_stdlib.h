/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Standard library definitions.
*/

#ifndef MY_STDLIB_H_
#define MY_STDLIB_H_

typedef struct my_div {
    int quot;
    int rem;
} my_div_t;

typedef struct my_ldiv {
    long quot;
    long rem;
} my_ldiv_t;

int my_abs(int x);
int my_atoi(const char *str);

long my_labs(long x);
long my_atol(const char *str);

long long my_atoll(char const *str);

my_div_t my_div(int numer, int denom);

my_ldiv_t my_ldiv(long numer, long denom);

#endif

