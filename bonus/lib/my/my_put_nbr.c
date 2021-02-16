/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** the cat is sacred \'^'/
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int modulo;
 
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    modulo = nb % 10;
    if (nb >= 10){
        nb = (nb - modulo) / 10;
        my_put_nbr(nb);
    }
    my_putchar(modulo + 48);
    return (0);
}
