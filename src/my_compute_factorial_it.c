/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compute the factorial of the specified number (iteratively).
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0 || nb > 12) {
        return 0;
    }

    for (int i = 1; i <= nb; i++) {
        result = result * i;
    }

    return result;
}
