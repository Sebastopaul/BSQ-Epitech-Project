/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** error handling
*/

#include "include/bsq.h"

int create_size(char *filepath, int size[2], int fd)
{
    if (fd == -1)
        return (-1);
    if (find_map_size(filepath, fd, size) == -1)
        return (-1);
    return (0);
}
int verif_char(char **map, int size[2], int row, int col)
{
    if (col < size[1] && map[row][col] != '.' && map[row][col] != 'o')
        return (-1);
    if (col == size[1] && map[row][col] != '\n')
        return (-1);
    return (0);
}
int verif_map(char **map, int size[2])
{
    int verifier = 0;
    int len_ref = my_strlen(map[0]);

    for (int row = 0; row < size[0]; row++) {
        if (len_ref != my_strlen(map[row]))
            return (-1);
        for (int col = 0; col < size[1]; col++) {
            verifier += verif_char(map, size, row, col);
        }
        if (verifier < 0)
            return (-1);
    }
    return (0);
}
