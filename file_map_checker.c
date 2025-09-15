/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_map_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamorcil <gamorcil@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:35:36 by gamorcil          #+#    #+#             */
/*   Updated: 2025/09/15 13:48:55 by gamorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int file_and_map_checker(char *file)
{
    int len;
    
    len = ft_strlen(file);
    if (len < 4 || ft_strncmp(file + len - 4, ".ber", 4) != 0)
        return (1);
    return (0);
}
