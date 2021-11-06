/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:42:03 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/06 19:01:57 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	collectibles_event(t_engine *engine, int x, int y)
{
	engine->map->move_count++;
	if (BONUS == 0)
		printf("%d\n", engine->map->move_count);
	engine->map->collectibles_nbr--;
	engine->map->map[x][y] = 'P';
	put_player_sprite_to_image(engine, y * 32, x * 32);
	if (engine->map->collectibles_nbr == 0)
		find_and_put_exitopen_sprite(engine);
}

void	exit_event(t_engine *engine)
{
	engine->map->move_count++;
	if (BONUS == 0)
		printf("%d\n", engine->map->move_count);
	free_engine(engine);
	printf("You won !\n");
	exit(EXIT_SUCCESS);
}

void	monster_event(t_engine *engine)
{
	engine->map->move_count++;
	if (BONUS == 0)
		printf("%d\n", engine->map->move_count);
	free_engine(engine);
	printf("You lost !\n");
	exit(EXIT_SUCCESS);
}

void	free_space_event(t_engine *engine, int x, int y)
{
	engine->map->move_count++;
	if (BONUS == 0)
		printf("%d\n", engine->map->move_count);
	engine->map->map[x][y] = 'P';
	put_player_sprite_to_image(engine, y * 32, x * 32);
}

void	quit_event(t_engine *engine)
{
	free_engine(engine);
	exit(EXIT_SUCCESS);
}
