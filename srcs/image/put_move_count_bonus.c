/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_move_count_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:16:20 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/05 16:11:17 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_move_count_to_image(t_engine *engine)
{
	char	*move;

	if (engine->map->move_count != 0)
	{
		move = ft_itoa(engine->map->move_count);
		mlx_string_put(engine->final_img->mlx_ptr, engine->final_img->win_ptr,
		10, 16, 0xFFFFFFFF, move);
		free(move);
	}
}