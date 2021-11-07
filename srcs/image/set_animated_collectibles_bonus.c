/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_animated_collectibles_bonus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:26:23 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 17:27:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	call_animated_collectibles_function(t_engine *engine, int y_pos,
int x_pos)
{
	if (engine->sprite->sprite_anim == 50)
		put_collectible1_sprite_to_image(engine, y_pos, x_pos);
	else if (engine->sprite->sprite_anim == 100)
		put_collectible2_sprite_to_image(engine, y_pos, x_pos);
	else if (engine->sprite->sprite_anim == 150)
		put_collectible3_sprite_to_image(engine, y_pos, x_pos);
	else if (engine->sprite->sprite_anim == 200)
		put_collectible4_sprite_to_image(engine, y_pos, x_pos);
	else if (engine->sprite->sprite_anim == 250)
	{
		put_collectible5_sprite_to_image(engine, y_pos, x_pos);
		engine->sprite->sprite_anim = 0;
	}
}

void	set_animated_collectibles(t_engine *engine)
{
	int	i;
	int	j;
	int	x_pos;
	int	y_pos;

	engine->sprite->sprite_anim++;
	i = 0;
	x_pos = 0;
	while (engine->map->map[i] != NULL)
	{
		j = 0;
		y_pos = 0;
		while (engine->map->map[i][j] != '\0')
		{
			if (engine->map->map[i][j] == 'C')
				call_animated_collectibles_function(engine, y_pos, x_pos);
			y_pos += 32;
			j++;
		}
		x_pos += 32;
		i++;
	}
}
