/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:49:03 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/18 18:51:35 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static t_bool	check_arg_format(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (str[--i] != 'r')
		return (ERROR);
	if (str[--i] != 'e')
		return (ERROR);
	if (str[--i] != 'b')
		return (ERROR);
	if (str[--i] != '.')
		return (ERROR);
	if (i == 0)
		return (ERROR);
	else
		return (SUCCESS);
}

static t_bool	check_file(char *str)
{
	int	fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (ERROR);
	}
	fd = open(str, O_DIRECTORY);
	if (fd != -1)
	{
		close(fd);
		return (ERROR);
	}
	return (SUCCESS);
}

static void	set_map_struct(t_pdata *map)
{
	map->line_len = 0;
	map->line_nbr = 0;
	map->column_nbr = 0;
	map->position_nbr = 0;
	map->exit_nbr = 0;
	map->collectibles_nbr = 0;
}

t_bool	arg_check(int ac, char *str)
{
	t_pdata	map;

	if (ac != 2)
	{
		printf("Error\nInvalid number of arguments\n");
		return (ERROR);
	}
	if (check_arg_format(str) == ERROR)
	{
		printf("Error\nFile is not in .ber format\n");
		return (ERROR);
	}
	if (check_file(str) == ERROR)
	{
		printf("Error\nInvalid file");
		return (ERROR);
	}
	set_map_struct(&map);
	if (map_check(&map, str) == ERROR)
	{
		printf("Error\nInvalid map");
		return (ERROR);
	}
	return (SUCCESS);
}
