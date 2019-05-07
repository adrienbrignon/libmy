/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Functions to compute common mathematical operations and transformations.
*/

#ifndef MY_MATH_H
#define MY_MATH_H

#include "my_config.h"

MY_API int my_isprime(int x);

MY_API double my_sqrt(double x);
MY_API double my_fabs(double n);
MY_API double my_ceil(double x);
MY_API double my_floor(double x);
MY_API double my_round(double x);
MY_API double my_trunc(double x);
MY_API double my_pow(double x, double y);
MY_API double my_fmax(double x, double y);
MY_API double my_fmin(double x, double y);
MY_API double my_ldexp(double x, int exp);
MY_API double my_fdim(double x, double y);
MY_API double my_copysign(double x, double y);
MY_API double my_fmod(double numer, double denom);
MY_API double my_fma(double x, double y, double z);

#endif
