/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Return the positive difference between x and y.
*/

double my_fdim(double x, double y)
{
    return x > y ? x - y : 0;
}
