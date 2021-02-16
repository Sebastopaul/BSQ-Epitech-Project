/*
** EPITECH PROJECT, 2020
** My Printf
** File description:
** Checker
*/

#include "my.h"

int check_convert(char const *format, int i, va_list list)
{
    void (*choose_func[10])(va_list, form_t, char) =
    {print_dec, print_dec, print_uint, print_uint, print_uint, print_uint,
    print_uint, print_uint, print_str, print_str};
    char converter[10] = "dicbouxXsS";
    int conv_i = 0;
    form_t printer = {0};

    printer.str = malloc(sizeof(char) * 100);
    while (converter[conv_i] != format[i] && converter[conv_i])
        conv_i++;
    choose_func[conv_i](list, printer, format[i]);
    return (i);
}
