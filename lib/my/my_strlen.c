/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** You surprised the cat O^O
*/

int my_strlen(char const *str)
{
    int index;

    index = 0;
    while (str[index] != '\0') {
        index++;
    }
    return (index);
}
