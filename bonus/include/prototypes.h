/*
** EPITECH PROJECT, 2020
** my printf
** File description:
** prototypes
*/

#ifndef PROTOTYPES_H_
#define PROTOTYPES_H_

#include "my.h"

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_put_unbr(unsigned int nb, unsigned int base, int maj);
void print_uint(va_list list, form_t printer, char c);
void print_dec(va_list list, form_t printer, char c);
void print_str(va_list list, form_t printer, char c);
int my_printf(char const *format, ...);
int check_convert(char const *format, int i, va_list list);
int my_getnbr(char const *str);
int my_strlen(char const *str);

#endif /* PROTOTYPES_H */
