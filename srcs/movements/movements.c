/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:19:56 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/05 15:48:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_engine *engine, int x, int y)
{
	if (engine->map->map[x - 1][y] == 'C')
	{
		collectibles_event(engine, x - 1, y);
		engine->map->map[x][y] = '0';
		put_background_sprite_to_image(engine, y * 32, x * 32);
	}
	else if (engine->map->map[x - 1][y] == 'E'
	&& engine->map->collectibles_nbr == 0)
		exit_event(engine);
	else if (engine->map->map[x - 1][y] == 'M')
		monster_event(engine);
	else if (engine->map->map[x - 1][y] == '0')
	{
		free_space_event(engine, x - 1, y);
		engine->map->map[x][y] = '0';
		put_background_sprite_to_image(engine, y * 32, x * 32);
	}
}

void	move_down(t_engine *engine, int x, int y)
{
	if (engine->map->map[x + 1][y] == 'C')
	{
		collectibles_event(engine, x + 1, y);
		engine->map->map[x][y] = '0';
		put_background_sprite_to_image(engine, y * 32, x * 32);
	}
	else if (engine->map->map[x + 1][y] == 'E'
	&& engine->map->collectibles_nbr == 0)
		exit_event(engine);
	else if (engine->map->map[x + 1][y] == 'M')
		monster_event(engine);
	else if (engine->map->map[x + 1][y] == '0')
	{
		free_space_event(engine, x + 1, y);
		engine->map->map[x][y] = '0';
		put_background_sprite_to_image(engine, y * 32, x * 32);
	}
}

void	move_right(t_engine *engine, int x, int y)
{
	if (engine->map->map[x][y + 1] == 'C')
	{
		collectibles_event(engine, x, y + 1);
		engine->map->map[x][y] = '0';
		put_background_sprite_to_image(engine, y * 32, x * 32);
	}
	else if (engine->map->map[x][y + 1] == 'E'
	&& engine->map->collectibles_nbr == 0)
		exit_event(engine);
	else if (engine->map->map[x][y + 1] == 'M')
		monster_event(engine);
	else if (engine->map->map[x][y + 1] == '0')
	{
		free_space_event(engine, x, y + 1);
		engine->map->map[x][y] = '0';
		put_background_sprite_to_image(engine, y * 32, x * 32);
	}
}

void	move_left(t_engine *engine, int x, int y)
{
	if (engine->map->map[x][y - 1] == 'C')
	{
		collectibles_event(engine, x, y - 1);
		engine->map->map[x][y] = '0';
		put_background_sprite_to_image(engine, y * 32, x * 32);
	}
	else if (engine->map->map[x][y - 1] == 'E'
	&& engine->map->collectibles_nbr == 0)
		exit_event(engine);
	else if (engine->map->map[x][y - 1] == 'M')
		monster_event(engine);
	else if (engine->map->map[x][y - 1] == '0')
	{
		free_space_event(engine, x, y - 1);
		engine->map->map[x][y] = '0';
		put_background_sprite_to_image(engine, y * 32, x * 32);
	}
}
