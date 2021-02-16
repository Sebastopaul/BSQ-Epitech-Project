/*
** EPITECH PROJECT, 2020
** My Printf
** File description:
** main file
*/

#include "my.h"

int my_printf(char const *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '%')
            i = check_convert(format, i + 1, list);
        else
            my_putchar(format[i]);
        if (format[i] == '%' && format[i + 1] == '%')
            i++;
    }
    va_end(list);
    return (0);
}
