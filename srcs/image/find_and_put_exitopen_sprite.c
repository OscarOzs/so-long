/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_put_exitopen_sprite.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:34:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 16:55:46 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	find_and_put_exitopen_sprite(t_engine *engine)
{
	int	i;
	int	j;
	int	x_pos;
	int	y_pos;

	i = 0;
	x_pos = 0;
	while (engine->map->map[i] != NULL)
	{
		j = 0;
		y_pos = 0;
		while (engine->map->map[i][j] != '\0')
		{
			if (engine->map->map[i][j] == 'E')
				put_exitopen_sprite_to_image(engine, y_pos, x_pos);
			y_pos += 32;
			j++;
		}
		x_pos += 32;
		i++;
	}
}
