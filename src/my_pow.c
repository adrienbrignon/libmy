/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compute the power of the specified number (recursively).
*/

int my_pow(int nb, int p)
{
    if (p == 0)
        return 1;
    else if (p < 0)
        return 0;

    return my_pow(nb, p - 1) * nb;
}
