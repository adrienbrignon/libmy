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

typedef struct my_lldiv {
    long long quot;
    long long rem;
} my_lldiv_t;

int my_abs(int x);
int my_atoi(const char *str);

long my_labs(long x);
long my_atol(const char *str);

long long my_llabs(long long n);
long long my_atoll(char const *str);

char *my_itoa(int n, char *buf, int base);
char *my_ltoa(long n, char *buf, int base);
char *my_lltoa(long long n, char *buf, int base);
char *my_ultoa(unsigned long n, char *buf, int base);

my_div_t my_div(int numer, int denom);
my_ldiv_t my_ldiv(long numer, long denom);
my_lldiv_t my_lldiv(long long numer, long long denom);

#endif
