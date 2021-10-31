/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:42:03 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/31 19:58:27 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	collectibles_event(t_map *map, int x, int y)
{
	map->move_count++;
	map->collectibles_nbr--;
	map->map[x][y] = 'P';
}

void	exit_event(t_engine *engine)
{
	free_engine(engine);
	printf("You won !\n");
	exit(EXIT_SUCCESS);
}

void	monster_event(t_engine *engine)
{
	free_engine(engine);
	printf("You lost !\n");
	exit(EXIT_SUCCESS);
}

void	free_space_event(t_map *map, int x, int y)
{
	map->move_count++;
	map->map[x][y] = 'P';
}

void	quit_event(t_engine *engine)
{
	free_engine(engine);
	exit(EXIT_SUCCESS);
}
