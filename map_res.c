/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_res.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamorcil <gamorcil@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:35:34 by gamorcil          #+#    #+#             */
/*   Updated: 2025/09/16 17:02:15 by gamorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    get_map_res(t_map   *map, char *file)
{
    int fd;
    char    *line;

    map->y = 0;
    map->x = 0;
    fd = open(file, O_RDONLY);
    if (fd == -1)
        return ;
    while ((line = get_next_line(fd)) != NULL)
    {
        if (map->y == 0)
            map->x = ft_strlen(line) - 1;
        map-> y++; 
        free(line);
    }
    close(fd);
}
