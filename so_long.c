/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamorcil <gamorcil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:53:35 by gamorcil          #+#    #+#             */
/*   Updated: 2025/09/15 12:53:37 by gamorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
    t_map   map;

	void  *mlx;
	void  *mlx_win;
	if (argc != 2 || file_and_map_checker(argv[1]) == 1) 
	{
		printf("Falta mapa o la extension del archivo no es .ber\n");
		return (1);
	}
    get_map_res(&map, argv[1]);
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, map.x * 64, map.y * 64, "so_long");
	mlx_loop(mlx);
}
