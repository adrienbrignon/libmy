/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Compute the power of the specified number (iteratively).
*/

int my_compute_power_it(int nb, int pow)
{
    int prev = 1;
    int result = 1;

    while (pow > 0) {
        prev = result;
        result = result * nb;

        if (prev != 0 && result / prev != nb) {
            return 0;
        }

        pow--;
    }

    return pow >= 0 ? result : 0;
}
