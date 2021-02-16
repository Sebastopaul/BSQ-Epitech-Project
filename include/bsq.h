/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** header
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

typedef struct square_s
{
    int x;
    int y;
    int size;
} square_t;

int load_map_from_file(char **buff, int size[2], int fd);
int find_map_size(char *filepath, int fd, int size[2]);
int create_size(char *filepath, int size[2], int fd);
int verif_map(char **map, int size[2]);
void find_biggest_square(char **map, int map_size[2]);

#endif  /* BSQ_H_ */
