/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_putnbr unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/redirect.h>
#include <criterion/criterion.h>

Test(unit, my_putnbr, .init = redirect_all_std)
{
    my_putnbr(-27180);

    cr_assert_stdout_eq_str("-27180");
}
