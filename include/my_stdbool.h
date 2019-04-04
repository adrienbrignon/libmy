/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Boolean type.
*/

#ifndef MY_STDBOOL_H_
#define MY_STDBOOL_H_

#define __my_bool_true_false_are_defined (1)

typedef enum {
    my_false = 0,
    my_true = !my_false
} my_bool_t;

#endif
