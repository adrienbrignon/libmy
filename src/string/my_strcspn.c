/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Find the length of initial segment not matching the given mask.
*/

int my_strcspn(const char *str, const char *mask)
{
    unsigned int i;

    for (i = 0; str[i] != '\0'; i++)
        for (unsigned long j = 0; mask[j] != '\0'; j++)
            if (str[i] == mask[j])
                return i;

    return i;
}