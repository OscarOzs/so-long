/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_next_frame.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:08:53 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 17:25:00 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	get_player_pos(t_map *map, int *x, int *y)
{
	int	i;
	int	j;

	i = 0;
	while (map->map[i] != NULL)
	{
		j = 0;
		while (map->map[i][j] != '\0')
		{
			if (map->map[i][j] == 'P')
			{
				*x = i;
				*y = j;
			}
			j++;
		}
		i++;
	}
}

static void	set_map(t_engine *engine)
{
	int	x;
	int	y;

	get_player_pos(engine->map, &x, &y);
	if (engine->final_img->keycode == 'w')
		move_up(engine, x, y);
	else if (engine->final_img->keycode == 's')
		move_down(engine, x, y);
	else if (engine->final_img->keycode == 'd')
		move_right(engine, x, y);
	else if (engine->final_img->keycode == 'a')
		move_left(engine, x, y);
	else if (engine->final_img->keycode == 'e')
		quit_event(engine);
	engine->final_img->keycode = '0';
}

int	render_next_frame(t_engine *engine)
{
	set_map(engine);
	if (BONUS == 1)
	{
		set_animated_collectibles(engine);
		set_patrol_monsters(engine);
	}
	mlx_put_image_to_window(engine->final_img->mlx_ptr,
		engine->final_img->win_ptr, engine->final_img->img_ptr, 0, 0);
	if (BONUS == 1)
		put_move_count_to_image(engine);
	return (SUCCESS);
}
