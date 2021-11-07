/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patrol_move_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:34:05 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 16:56:25 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	patrol_move_down(t_engine *engine, int x, int y)
{
	engine->map->map[x][y] = '0';
	put_background_sprite_to_image(engine, y * 32, x * 32);
	engine->map->map[x + 1][y] = 'M';
	put_monster_sprite_to_image(engine, y * 32, (x + 1) * 32);
}

void	patrol_move_up(t_engine *engine, int x, int y)
{
	engine->map->map[x][y] = '0';
	put_background_sprite_to_image(engine, y * 32, x * 32);
	engine->map->map[x - 1][y] = 'M';
	put_monster_sprite_to_image(engine, y * 32, (x - 1) * 32);
}
