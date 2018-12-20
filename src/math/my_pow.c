/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compute the power of the specified number (recursively).
*/

double my_pow(double x, double y)
{
    if (y == 0)
        return 1;
    else if (y < 0)
        return 0;

    return my_pow(x, y - 1.0) * x;
}
