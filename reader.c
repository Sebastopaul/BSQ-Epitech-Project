/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** reader
*/

#include "include/bsq.h"

int load_map_from_file(char **buff, int size[2], int fd)
{
    for (int row = 0; row < size[0]; row++) {
        size[1] -= size[1] - read(fd, buff[row], size[1] + 1) + 1;
        if (buff[row][(size[1])] != '\n')
            return (-1);
    }
    return (0);
}
int find_map_size(char *filepath, int fd, int size[2])
{
    struct stat st_file = {0};
    char *buff = malloc(sizeof(char) * 11 + 2);

    for (int i = 0; buff[i - 1] != '\n'; i++) {
        read(fd, buff + i, 1);
        if (buff[i] != '\n' && (buff[i] < '0' || buff[i] > '9'))
            return (-1);
    }
    if (buff[0] == '\0')
        return (-1);
    size[0] = my_getnbr(buff);
    stat(filepath, &st_file);
    size[1] = st_file.st_size / size[0] - 1;
    return (0);
}
