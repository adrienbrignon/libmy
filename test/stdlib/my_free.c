/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_free unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_free)
{
    my_free(MY_NULL);
    cr_assert(1);
}
