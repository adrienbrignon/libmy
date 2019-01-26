/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_write unit test.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "my_unistd.h"

static void redirect_std(void)
{
    cr_redirect_stdout();
}

Test(unistd, my_write, .init = redirect_std)
{
    cr_assert_eq(my_write(MY_STDOUT_FILENO, "X", 1), 1);
    cr_assert_stdout_eq_str("X");
}
