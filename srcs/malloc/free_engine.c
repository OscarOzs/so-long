/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_engine.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:00:48 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/03 14:27:02 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_engine(t_engine *engine)
{
	int	i;

	free(engine->sprite);
	free(engine->final_img);
	i = 0;
	while (engine->map->map[i] != NULL)
	{
		free(engine->map->map[i]);
		i++;
	}
	free(engine->map);
	free(engine);
}
