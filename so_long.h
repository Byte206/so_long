#ifndef SO_LONG_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <mlx.h>
# include "gnl/get_next_line.h"
# include "libft/libft.h"

typedef struct s_map
{
    int x;
    int y;

}   t_map;


int	file_and_map_checker(char *file);	
void    get_map_res(t_map   *map, char *file);
#endif
