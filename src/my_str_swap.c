/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Swap the given strings.
*/

void my_str_swap(char **a, char **b)
{
    char *temp = *b;

    *b = *a;
    *a = temp;
}
