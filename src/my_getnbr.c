/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Parse the specified string to an integer.
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int beginning = 1;

    while (str[i] != '\0') {
        if ((str[i] == '+' || str[i] == '-') && beginning) {
            sign *= str[i++] == '+' ? 1 : -1;
        } else if (str[i] < '0' || str[i] > '9') {
            break;
        } else {
            beginning = 0;
            result = result * 10 + str[i++] - '0';
        }
    }

    return sign * result;
}
