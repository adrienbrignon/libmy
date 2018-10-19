/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_array_strlen unit test.
*/

#include "my.h"
#include <criterion/criterion.h>

Test(unit, my_array_strlen)
{
    char *array[] = {
        "I",
        "like",
        "trains."
    };

    cr_assert_eq(my_array_strlen(array, 3), 12);
}
