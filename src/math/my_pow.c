/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compute the power of the specified number (recursively).
*/

double my_pow(double x, double y)
{
    return y == 0.0 ? 1.0 : y < 0.0 ? 0.0 : my_pow(x, y - 1.0) * x;
}
