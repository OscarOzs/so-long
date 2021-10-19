/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:23:14 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/19 20:20:35 by oozsertt         ###   ########.fr       */
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
		line_len = ft_strlen(line);
		if (count != 0)
		{
			if (line_len != ft_strlen(line))
				return (ERROR);
		}
		count++;
	}
	return (SUCCESS);
}

t_bool cross_check_char(int fd, t_mcdata *mapdata)
{
	char	**map;

	if (is_map_square(fd) == ERROR)
			return (ERROR);
	map = setup_cross_check(fd, map);
	if (c == 'P')
		mapdata->position_nbr++;
	else if (c == 'E')
		mapdata->exit_nbr++;
	else if (c == 'C')
		mapdata->collectibles_nbr++;
	else if (c == '0')
	{
		if (cross_check(fd, map) == ERROR)
			return (ERROR);
	}
	else if (c != '1')
		return (ERROR);
	return (SUCCESS);
}

t_bool	map_check(t_mcdata *map, char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (ERROR);
	}
	if (cross_check_char(fd, map) == ERROR)
		return (ERROR);
	if (final_check(map) == ERROR)
		return (ERROR);
	close(fd);
	return (SUCCESS);
}
