/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_final_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:54:10 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/20 18:02:47 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_bool final_check(t_mcdata *mapdata)
{
	if (mapdata->exit_nbr >= 1 && mapdata->position_nbr == 1
		&& mapdata->collectibles_nbr >= 1 && mapdata->line_len >= 3
		&& mapdata->line_nbr >= 3)
		return (SUCCESS);
	return (ERROR);
}
