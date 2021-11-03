/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:01:02 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/03 19:02:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static t_bool	get_line_nbr(int fd, size_t *line_nbr)
{
	int		ret;
	char	*line;
	size_t	len;

	ret = -1;
	len = 0;
	while (ret != 0)
	{
		ret = get_next_line(fd, &line);
		if (ret == ERROR)
			return (ERROR);
		free(line);
		len++;
	}
	close(fd);
	*line_nbr = len;
	return (SUCCESS);
}

static t_bool	get_column_nbr(int fd, size_t *column_nbr)
{
	char	*line;
	size_t	len;

	if (get_next_line(fd, &line) == ERROR)
		return (ERROR);
	len = ft_strlen(line);
	free(line);
	close(fd);
	*column_nbr = len;
	return (SUCCESS);
}

static t_bool	fill_map(t_map *map, int fd)
{
	int		ret;
	char	*line;
	int		i;

	ret = -1;
	i = 0;
	while (ret != 0)
	{
		ret = get_next_line(fd, &line);
		if (ret == ERROR)
			return (ERROR);
		map->map[i] = ft_strdup(line);
		ft_malloc_failed(map->map[i]);
		free(line);
		i++;
	}
	close(fd);
	return (SUCCESS);
}

t_map	*create_map(int fd, char *file, t_map *map)
{
	size_t		column_nbr;
	size_t		line_nbr;

	if (get_line_nbr(fd, &line_nbr) == ERROR)
		return (NULL);
	map->line_nbr = line_nbr;
	map->map = (char **)malloc(sizeof(char *) * (line_nbr + 1));
	if (map->map == NULL)
	{
		printf("Error\nMalloc failed");
		return (NULL);
	}
	map->map[line_nbr] = NULL;
	if (ft_open_rdonly(&fd, file) == ERROR)
		return (NULL);
	if (get_column_nbr(fd, &column_nbr) == ERROR)
		return (NULL);
	map->line_len = column_nbr;
	map->column_nbr = column_nbr;
	if (ft_open_rdonly(&fd, file) == ERROR)
		return (NULL);
	if (fill_map(map, fd) == ERROR)
		return (NULL);

	return (map);
}
