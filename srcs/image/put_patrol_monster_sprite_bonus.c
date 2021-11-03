/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_patrol_monster_sprite_bonus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:46:19 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/03 16:43:53 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// static t_bool	monster_move_down(t_engine *engine, int y, int x)
// {
// 	if (engine->map->map[x + 1][y] != '1')
// 	{
// 		engine->map->map[x][y] = engine->map->map[x + 1][y];
// 		engine->map->map[x + 1][y] = 'M';
// 		return (SUCCESS);
// 	}
// 	return (ERROR);
// }

// static t_bool	monster_move_up(t_engine *engine, int y, int x)
// {
// 	if (engine->map->map[x - 1][y] != '1')
// 	{
// 		engine->map->map[x][y] = engine->map->map[x - 1][y];
// 		engine->map->map[x - 1][y] = 'M';
// 		return (SUCCESS);
// 	}
// 	return (ERROR);
// }

// static t_bool	monster_move_left(t_engine *engine, int y, int x)
// {
// 	if (engine->map->map[x][y - 1] != '1')
// 	{
// 		engine->map->map[x][y] = engine->map->map[x][y - 1];
// 		engine->map->map[x][y - 1] = 'M';
// 		return (SUCCESS);
// 	}
// 	return (ERROR);
// }

// static t_bool	monster_move_right(t_engine *engine, int y, int x)
// {
// 	if (engine->map->map[x][y + 1] != '1')
// 	{
// 		engine->map->map[x][y] = engine->map->map[x][y + 1];
// 		engine->map->map[x][y + 1] = 'M';
// 		return (SUCCESS);
// 	}
// 	return (ERROR);
// }

// t_bool  put_patrol_monster_sprite(t_engine *engine, int i, int j)
// {
// 	if (monster_move_down(engine, i, j) == SUCCESS)
//         return (SUCCESS);
//     else if (monster_move_up(engine, i, j) == SUCCESS)
//         return (SUCCESS);
//     else if (monster_move_left(engine, i, j) == SUCCESS)
//         return (SUCCESS);
//     else if (monster_move_right(engine, i, j) == SUCCESS)
//         return (SUCCESS);
// 	engine->sprite->sprite_anim = 0;
//     return (ERROR);
// }
