#ifndef SO_LONG_H
#define SO_LONG_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "utils/gnl/get_next_line.h"

int map(char *arg);

typedef struct s_cell
{
	char			value;
	struct s_cell	*next;
} t_cell;

typedef struct s_line
{
	int				y;
	t_cell			*cells;
	struct s_line	*next;
} t_line;

typedef struct s_map
{
	t_line	*lines;
} t_map;

#endif