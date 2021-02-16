/*
** EPITECH PROJECT, 2020
** my printf
** File description:
** convert_uint
*/

#include "my.h"

void print_uint(va_list list, form_t printer, char c)
{
    int base = 0;
    int maj = 0;

    printer.uint = va_arg(list, unsigned int);
    if (c != 'c') {
        if (c == 'b')
            base = 2;
        if (c == 'o')
            base = 8;
        if (c == 'u')
            base = 10;
        if (c == 'x')
            base = 16;
        if (c == 'X') {
            base = 16;
            maj = 1;
        }
        my_put_unbr(printer.uint, base, maj);
    } else
        my_putchar(printer.uint);
}
void print_dec(va_list list, form_t printer, char c)
{
    if (c == 'd' || c == 'i') {
        printer.dec = va_arg(list, int);
        my_put_nbr(printer.dec);
    }
}
void print_str(va_list list, form_t printer, char c)
{
    if (c == 's') {
        my_putstr(va_arg(list, char *));
        return;
    }
    printer.str = va_arg(list, char *);
    for (int i = 0; printer.str[i] != '\0'; i++) {
        if (printer.str[i] < 32 || printer.str[i] == 127) {
            my_putchar('\\');
            my_put_unbr(printer.str[i], 8, 0);
        }
        else
            my_putchar(printer.str[i]);
    }
}
