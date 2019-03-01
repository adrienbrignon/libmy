/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_getpid unit test.
*/

#include <criterion/criterion.h>

#include "my_unistd.h"

Test(unistd, my_getpid)
{
    cr_assert_eq(my_getpid(), getpid());
}
