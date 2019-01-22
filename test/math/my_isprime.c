/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_isprime unit test.
*/

#include <criterion/criterion.h>

#include "my_math.h"

Test(math, my_isprime)
{
    cr_assert_eq(my_isprime(0), 0);
    cr_assert_eq(my_isprime(2), 1);
    cr_assert_eq(my_isprime(6), 0);
    cr_assert_eq(my_isprime(7), 1);
    cr_assert_eq(my_isprime(13), 1);
    cr_assert_eq(my_isprime(403), 0);
    cr_assert_eq(my_isprime(409), 1);
    cr_assert_eq(my_isprime(953), 1);
}
