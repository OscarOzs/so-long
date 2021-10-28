/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:33:07 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/28 13:30:24 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static t_bool	check_left(int i, int j, t_mdata *map)
{
	int	x;
	int	y;

	x = i;
	y = j;
	while (y >= 0)
	{
		if (map->map[x][y] == '1')
			return (SUCCESS);
		y--;
	}
	return (ERROR);
}

static t_bool	check_right(int i, int j, t_mdata *map)
{
	int	x;
	int	y;

	x = i;
	y = j;
	while (y <= map->line_len)
	{
		if (map->map[x][y] == '1')
		{
			if (check_left(i, j, map) == ERROR)
				return (ERROR);
			return (SUCCESS);
		}
		y++;
	}
	return (ERROR);
}

static t_bool	check_down(int i, int j, t_mdata *map)
{
	int	x;
	int	y;

	x = i;
	y = j;
	while (x <= map->line_nbr)
	{
		if (map->map[x][y] == '1')
		{
			if (check_right(i, j, map) == ERROR)
				return (ERROR);
			return (SUCCESS);
		}
		x++;
	}
	return (ERROR);
}

static t_bool	check_up(int i, int j, t_mdata *map)
{
	int	x;
	int	y;

	x = i;
	y = j;
	while (x >= 0)
	{
		if (map->map[x][y] == '1')
		{
			if (check_down(i, j, map) == ERROR)
				return (ERROR);
			return (SUCCESS);
		}
		x--;
	}
	return (ERROR);
}

t_bool	cross_check(t_mdata *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->map[i] != NULL)
	{
		j = 0;
		while (map->map[i][j] != '\0')
		{
			if (map->map[i][j] == '0')
			{
				if (check_up(i, j, map) == ERROR)
					return (ERROR);
			}
			j++;
		}
		i++;
	}
	return (SUCCESS);
}
