/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_whole_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:53:22 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/06 17:27:35 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_char(t_engine *engine ,char c, int y_pos, int x_pos)
{
	if (c == '0' || c == 'P' || c == 'M' || c == 'E')
		put_background_sprite_to_image(engine, y_pos, x_pos);
	if (c == '1')
		put_wall_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'P')
		put_player_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'C')
		put_collectible_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'E' && engine->map->collectibles_nbr != 0)
		put_exit_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'E' && engine->map->collectibles_nbr == 0)
		put_exitopen_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'M' && BONUS == 1)
		put_monster_sprite_to_image(engine, y_pos, x_pos);
}

void    put_whole_map(t_engine *engine)
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
			check_char(engine, engine->map->map[i][j], y_pos, x_pos);
			y_pos += 32;
			j++;
		}
		x_pos += 32;
		i++;
	}
}
