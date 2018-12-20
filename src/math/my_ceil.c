/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** ROund fractions up.
*/

double my_ceil(double x)
{
    long rounded = x;

    if (x - rounded > 0)
        return rounded + 1;

    return rounded;
}
