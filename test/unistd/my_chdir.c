/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_chdir unit test.
*/

#include <criterion/criterion.h>

#include "my_unistd.h"

Test(unistd, my_chdir)
{
    cr_assert_eq(my_chdir("."), 0);
}
