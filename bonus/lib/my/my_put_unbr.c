/*
** EPITECH PROJECT, 2020
** my printf
** File description:
** put unbr
*/

#include "my.h"

int my_put_unbr(unsigned int nb, unsigned int base, int maj)
{
    unsigned int modulo = nb % base;

    if (nb >= base){
        nb = (nb - modulo) / base;
        my_put_unbr(nb, base, maj);
    }
    if (modulo < 10)
        my_putchar(modulo + 48);
    else if (maj == 1)
        my_putchar(modulo + 55);
    else
        my_putchar(modulo + 87);
    return (0);
}
