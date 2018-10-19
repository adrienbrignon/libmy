/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the specified number is a prime one.
*/

int my_isprime(int nb)
{
    if (nb < 2) {
        return 0;
    } else if (nb == 2) {
        return 1;
    }

    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            return 0;
        }
    }

    return 1;
}
