/*
** EPITECH PROJECT, 2020
** bsbsq
** File description:
** load 2d arr from file
*/

#include "include/bsq.h"

char **alloc_arr(int size[2])
{
    char **arr = malloc(sizeof(int) * (size[1] + 1) * size[0]);

    for (int row = 0; row < size[0]; row += 1)
        arr[row] = malloc(sizeof(char) * size[1] + 2);
    return (arr);
}
void print_map(char **map, int size[2])
{
    int map_size = (size[1] + 1) * size[0];
    char *new_map = malloc(sizeof(char) * map_size);
    int i = 0;

    for (int row = 0; map[row]; row++) {
        for (int col = 0; map[row][col]; col++, i++)
            new_map[i] = map[row][col];
    }
    write(1, new_map, map_size);
}
int main(int ac, char **av)
{
    int fd;
    int size[2] = {0};
    char **map = {0};

    if (ac == 2) {
        fd = open(av[1], O_RDONLY);
        if (create_size(av[1], size, fd) == -1)
            return (84);
        map = alloc_arr(size);
        if (load_map_from_file(map, size, fd) == -1)
            return (84);
        close(fd);
        if (verif_map(map, size) == -1)
            return (84);
        find_biggest_square(map, size);
        print_map(map, size);
        free(map);
        return (0);
    }
    return (84);
}
