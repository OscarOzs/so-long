/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_patrol_monster_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:45:39 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/05 16:06:29 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	monster_move_on_player(t_engine *engine, int x, int y)
{
	if (engine->map->map[x + 1][y] == 'P')
		monster_event(engine);
	else if (engine->map->map[x - 1][y] == 'P')
		monster_event(engine);
}

static void call_function_patrol_monster(t_engine *engine, int x, int y)
{
	static t_bool is_wall;
	
	if (engine->sprite->sprite_anim_monster == 500)
	{
		monster_move_on_player(engine, x, y);
		if (engine->map->map[x + 1][y] == '0' && is_wall == 0)
		{
			patrol_move_down(engine, x, y);
			if (engine->map->map[x + 2][y] == '1')
				is_wall = 1;
		}
		else if (engine->map->map[x - 1][y] == '0' && is_wall == 1)
		{
			patrol_move_up(engine, x, y);
			if (engine->map->map[x - 2][y] == '1')
				is_wall = 0;
		}
		else
			is_wall = 1;
		engine->sprite->sprite_anim_monster = 0;
	}
	engine->sprite->sprite_anim_monster++;
}

void    set_patrol_monsters(t_engine *engine)
{
    int i;
    int j;

    i = 0;
    while (engine->map->map[i] != NULL)
    {
        j = 0;
        while (engine->map->map[i][j] != '\0')
        {
            if (engine->map->map[i][j] == 'M')
                call_function_patrol_monster(engine, i, j);
            j++;
        }
        i++;
    }
}
