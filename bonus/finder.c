/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** find_biggest_square
*/

#include "include/bsq.h"

int find_biggest_square_at_index(char **map, int row, int col)
{
    int size_saver = 0;
    int size = 0;
    int rows = 0;

    for (rows = row; rows >= 0; rows--) {
        for (int cols = col; cols >= 0 && map[rows][cols] != 'o'; cols--)
            size = col - cols + 1;
        if (rows == row)
            size_saver = size;
        if (size <= size_saver)
            size_saver = size;
        size = 0;
        if (row - rows >= size_saver) {
            size_saver = row - rows;
            break;
        }
    }
    if (row - rows <= size_saver)
        size_saver = row - rows;
    return (size_saver);
}
void replace_square(char **map, square_t square)
{
    for (int row = square.y; square.y - row < square.size; row--) {
        for (int col = square.x; square.x - col < square.size; col--)
            map[row][col] = 'x';
    }
}
void verif_square(square_t *square, int size, int row, int col)
{
    if (size >= square->size) {
        square->x = col;
        square->y = row;
        square->size = size;
    }
}
void find_biggest_square(char **map, int map_size[2])
{
    square_t square = {0};
    int size = 0;

    for (int row = map_size[0] - 1; row >= square.size - 1; row--) {
        for (int col = map_size[1] - 1; col >= square.size - 1; col--) {
            size = find_biggest_square_at_index(map, row, col);
            verif_square(&square, size, row, col);
        }
    }
    replace_square(map, square);
    print_map(map, map_size, square);
}
