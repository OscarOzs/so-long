/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_next_frame.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:24:44 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/01 19:14:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


static void	check_char(t_engine *engine ,char c, int y_pos, int x_pos)
{
	if (c == '1')
		put_wall_sprite_to_image(engine, y_pos, x_pos);
	else if (c == '0')
		put_background_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'P')
		put_player_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'C')
		put_collectibles_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'E')
		put_exit_sprite_to_image(engine, y_pos, x_pos);
	else if (c == 'M')
		put_monster_sprite_to_image(engine, y_pos, x_pos);
}

void	put_next_frame(t_engine *engine)
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
	mlx_put_image_to_window(engine->final_img->mlx_ptr, engine->final_img->win_ptr, engine->final_img->img_ptr, 0, 0);
}
