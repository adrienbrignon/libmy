/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compute the power of the specified number (recursively).
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return 1;
    } else if (p < 0) {
        return 0;
    }

    return my_compute_power_rec(nb, p - 1) * nb;
}
