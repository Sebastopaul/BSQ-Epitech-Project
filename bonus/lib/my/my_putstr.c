/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** The cat is going crazy `^`
*/

#include "my.h"

int my_putstr(char const *str)
{
    int index;

    index = 0;
    while (str[index] != '\0') {
        my_putchar(str[index]);
        index++;
    }
    return (0);
}
