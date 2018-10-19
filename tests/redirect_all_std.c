/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Redirect all outputs to Criterion.
*/

#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
