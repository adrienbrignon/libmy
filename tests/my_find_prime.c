/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_find_prime unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_find_prime)
{
    cr_assert_eq(my_find_prime(0), 2);
    cr_assert_eq(my_find_prime(2), 2);
    cr_assert_eq(my_find_prime(-256), 2);
    cr_assert_eq(my_find_prime(194), 197);
}
