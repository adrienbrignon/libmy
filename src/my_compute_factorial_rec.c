/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compute the factorial of the specified number (recursively).
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12) {
        return 0;
    } else if (nb == 0) {
        return 1;
    }

    return my_compute_factorial_rec(nb - 1) * nb;
}
