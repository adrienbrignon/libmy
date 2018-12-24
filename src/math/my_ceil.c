/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** ROund fractions up.
*/

double my_ceil(double x)
{
    return x - (long) x > 0 ? (long) x + 1 : (long) x;
}
