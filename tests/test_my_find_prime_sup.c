/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_find_prime_sup unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_find_prime_sup)
{
    cr_assert_eq(my_find_prime_sup(0), 2);
    cr_assert_eq(my_find_prime_sup(2), 2);
    cr_assert_eq(my_find_prime_sup(3), 3);
    cr_assert_eq(my_find_prime_sup(6600), 6607);
}
