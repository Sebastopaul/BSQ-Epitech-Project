/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** the cat is sad T^T
*/

int count_neg(char const *str)
{
    int count = 1;
    int index = 0;

    while (str[index] ==  '-' || str[index] == '+') {
        if (str[index] == '-') {
            count = count * -1;
        }
        index += 1;
    }
    return (count);
}

int count_nbr(long nbr)
{
    int res;

    if (nbr >= -2147483648 && nbr <= 2147483647) {
        res = nbr;
        return (res);
    } else {
        return (0);
    }
}

int my_getnbr(char const *str)
{
    long convert = 0;
    int convert_int = 0;
    int index = 0;
    int posneg = count_neg(str);

    while (str[index] != '\0') {
        if (str[index] > 47 && str[index] < 58) {
            convert = convert * 10 + (str[index] - 48);
        } else if (str[index] != 43 && str[index] != 45) {
            break;
        }
        index += 1;
    }
    if (index >= 11) {
        return (0);
    }
    convert_int = count_nbr(convert);
    return (convert_int * posneg);
}
