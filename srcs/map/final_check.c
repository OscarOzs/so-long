/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:54:10 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/28 13:30:28 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_bool	final_check(t_mdata *map)
{
	if (map->exit_nbr >= 1 && map->position_nbr == 1
		&& map->collectibles_nbr >= 1 && map->line_len >= 3
		&& map->line_nbr >= 3)
		return (SUCCESS);
	return (ERROR);
}
