/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_exit_sprite.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:50:25 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/06 19:16:01 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_exit_sprite_to_image(t_engine *engine, int i, int j)
{
	char	*text_pixel;
	int	x;
	int	y;
	int	width;
	int	height;

	width = 32;
	height = 32;	
	engine->sprite->img_ptr = mlx_xpm_file_to_image(engine->final_img->mlx_ptr, "./textures/Exit/ExitClose.xpm", &width, &height);
	engine->sprite->addr = mlx_get_data_addr(engine->sprite->img_ptr, &engine->sprite->bits_per_pixel, &engine->sprite->line_length, &engine->sprite->endian);
	y = 0;
	while (y < 32)
	{
		x = 0;
		while (x < 32)
		{
			text_pixel = engine->sprite->addr + (y * engine->sprite->line_length + x * (engine->sprite->bits_per_pixel / 8));
			if (text_pixel[0] != 0 && text_pixel[1] != 0 && text_pixel[2] != 0)
				my_mlx_pixel_put(engine->final_img, x + i, y + j, text_pixel);
			x++;
		}
		y++;
	}
	free_image(engine);
}
