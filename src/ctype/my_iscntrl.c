/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** Check if the chacracter is a control character.
*/

int my_iscntrl(char c)
{
    return (c >= '\a' && c <= '\r') || c == '\0' || c == 0x7F;
}
