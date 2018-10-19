/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_putchar unit test.
*/

#include "my.h"
#include "tests.h"
#include <criterion/redirect.h>
#include <criterion/criterion.h>

Test(unit, my_putchar, .init = redirect_all_std)
{
    my_putchar('@');

    cr_assert_stdout_eq_str("@");
}
