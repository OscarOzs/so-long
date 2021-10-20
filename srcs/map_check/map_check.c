/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:23:14 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/20 18:01:32 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// final check
		// if (check_pec_nbr(map) == ERROR)
		// 	return (ERROR);
		// if (check_line_and_column_nbr(map) == ERROR)
		// 	return (ERROR);

static t_bool	is_map_square(int fd)
{
	char	*line;
	int		ret;
	size_t	line_len;
	int		count;

	ret = -1;
	line_len = 0;
	count = 0;
	while (ret != 0)
	{
		ret = get_next_line(fd, &line);
		if (count != 0)
		{
			if (line_len != ft_strlen(line))
				return (ERROR);
		}
		line_len = ft_strlen(line);
		count++;
	}
	return (SUCCESS);
}

static t_bool	is_char(t_mcdata *mapdata, char c)
{
	if (c == 'P' || c == 'E' || c == 'C'
		|| c == '0')
	{
		if (c == 'P')
			mapdata->position_nbr++;
		else if (c == 'E')
			mapdata->exit_nbr++;
		else if (c == 'C')
			mapdata->collectibles_nbr++;
	}
	else if (c != '1')
		return (ERROR);
	return (SUCCESS);
}

static t_bool	check_char(char **map, t_mcdata *mapdata)
{
	int		i;
	int		j;

	i = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (is_char(mapdata, map[i][j]) == ERROR)
				return (ERROR);
			j++;
		}
		i++;
	}
	return (SUCCESS);
}

static t_bool	cross_check_char(int fd, t_mcdata *mapdata, char *file)
{
	char	**map;

	map = NULL;
	if (is_map_square(fd) == ERROR)
		return (ERROR);
	if (ft_open_rdonly(&fd, file) == ERROR)
		return (ERROR);
	map = setup_cross_check(fd, map, file, mapdata);
	if (check_char(map, mapdata) == ERROR)
		return (ERROR);
	if (cross_check(map, mapdata) == ERROR)
		return (ERROR);
	return (SUCCESS);
}

t_bool	map_check(t_mcdata *mapdata, char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (ERROR);
	}
	if (cross_check_char(fd, mapdata, file) == ERROR)
		return (ERROR);
	if (final_check(mapdata) == ERROR)
		return (ERROR);
	close(fd);
	return (SUCCESS);
}
