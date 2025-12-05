#include "./so_long.h"

int init_line(t_map *map, char *str)
{
	t_line	line;
	t_cell	*cell;
	int		i;

	cell = malloc(sizeof(t_cell));
	while (str[i])
	{
		cell->value = str[i];
		cell->next;
	}
	return(0);
}
int map(char *arg)
{
	int		fd;
	char	*line;
	t_map	*map;

	fd = open(arg, O_RDONLY);
	line = "t";
	while (line != NULL)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		init_map(map, line);
		free(line);
	}
	return (0);
}
