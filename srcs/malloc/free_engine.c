/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_engine.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:00:48 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/05 19:52:59 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_engine(t_engine *engine)
{
	int	i;

	i = 0;
	while (engine->map->map[i] != NULL)
	{
		free(engine->map->map[i]);
		i++;
	}
	free(engine->map->map[i]);
	free(engine->map->map);
	free(engine->map);
	mlx_destroy_image(engine->final_img->mlx_ptr,
	engine->final_img->img_ptr);
	mlx_destroy_window(engine->final_img->mlx_ptr,
	engine->final_img->win_ptr);
	free(engine->sprite);
	free(engine->final_img);
	free(engine);
}
