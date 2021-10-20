/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_cross_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:01:02 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/20 17:51:05 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static size_t	get_column_len(int fd)
{
	int		ret;
	char	*line;
	size_t	len;

	ret = -1;
	len = 0;
	while (ret != 0)
	{
		ret = get_next_line(fd, &line);
		len++;
	}
	return (len);
}

static size_t	get_line_len(int fd)
{
	char	*line;
	size_t	len;

	get_next_line(fd, &line);
	len = ft_strlen(line);
	return (len);
}

static char	**fill_map(char **map, int fd)
{
	int		ret;
	char	*line;
	int		i;

	ret = -1;
	i = 0;
	while (ret != 0)
	{
		ret = get_next_line(fd, &line);
		map[i] = ft_strdup(line);
		ft_malloc_failed(map[i]);
		i++;
	}
	return (map);
}

char	**setup_cross_check(int fd, char **map, char *file, t_mcdata *mapdata)
{
	size_t		line_len;
	size_t		column_len;

	line_len = get_line_len(fd);
	mapdata->line_len = line_len;
	if (ft_open_rdonly(&fd, file) == ERROR)
		exit (EXIT_FAILURE);
	map = (char **)malloc(sizeof(char *) * (line_len + 1));
	if (map == NULL)
	{
		printf("Error\nMalloc failed");
		exit(EXIT_FAILURE);
	}
	map[line_len] = NULL;
	column_len = get_column_len(fd);
	mapdata->line_nbr = column_len;
	if (ft_open_rdonly(&fd, file) == ERROR)
		exit (EXIT_FAILURE);
	map = fill_map(map, fd);
	return (map);
}
