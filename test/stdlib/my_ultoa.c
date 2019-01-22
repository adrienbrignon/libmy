/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_ultoa unit test.
*/

#include <criterion/criterion.h>

#include "my_stdlib.h"

Test(stdlib, my_ultoa)
{
    char buf[12];

    cr_assert_str_eq(my_ultoa(0UL, buf, 10), "0");
    cr_assert_str_eq(my_ultoa(256UL, buf, 10), "256");
    cr_assert_str_eq(my_ultoa(255UL, buf, 2), "11111111");
    cr_assert_str_eq(my_ultoa(49823369UL, buf, 16), "2f83e89");
    cr_assert_str_eq(my_ultoa(255653306UL, buf, 8), "1717172672");
}
