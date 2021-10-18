/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:23:14 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/18 18:50:28 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_bool	map_check(t_pdata *map, char *file)
{
	int	fd;
	int	x;
	int	y;
	int	i;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (ERROR);
	}
	x = 0;
	y = 0;
	i = 0;
}