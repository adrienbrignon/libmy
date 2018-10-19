/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Swap the specified pointers values.
*/

void my_swap(int *a, int *b)
{
    int temp = *b;

    *b = *a;
    *a = temp;
}
