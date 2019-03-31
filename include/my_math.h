/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Functions to compute common mathematical operations and transformations.
*/

#ifndef MY_MATH_H_
#define MY_MATH_H_

int my_isprime(int x);
int my_fmin(int x, int y);
int my_fmax(int x, int y);

double my_sqrt(double x);
double my_fabs(double n);
double my_ceil(double x);
double my_floor(double x);
double my_round(double x);
double my_trunc(double x);
double my_pow(double x, double y);
double my_ldexp(double x, int exp);
double my_fdim(double x, double y);
double my_copysign(double x, double y);
double my_fmod(double numer, double denom);
double my_fma(double x, double y, double z);

#endif
