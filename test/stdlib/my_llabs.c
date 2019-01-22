/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_llabs unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_llabs)
{
    cr_assert_eq(my_llabs(0), 0);
    cr_assert_eq(my_llabs(31558149LL), 31558149LL);
    cr_assert_eq(my_llabs(-100000000LL), 100000000);
}
