/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_wall_sprite.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:30:28 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/01 18:24:02 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_wall_sprite_to_image(t_engine *engine, int i, int j)
{
	char	*text_pixel;
	int	x;
	int	y;
	int	width;
	int	height;

	width = 32;
	height = 32;	
	engine->sprite->img_ptr = mlx_xpm_file_to_image(engine->sprite->mlx_ptr, "./textures/wall.xpm", &width, &height); // catch texture
	engine->sprite->addr = mlx_get_data_addr(engine->sprite->img_ptr, &engine->sprite->bits_per_pixel, &engine->sprite->line_length, &engine->sprite->endian); // catch pixel de texture
	y = 0;
	while (y < 32)
	{
		x = 0;
		while (x < 32)
		{
			text_pixel = engine->sprite->addr + (y * engine->sprite->line_length + x * (engine->sprite->bits_per_pixel / 8)); // put text_pixel sur addr de texture
			my_mlx_pixel_put(engine->final_img, x + i, y + j, text_pixel); // put text_pixel sur addr de image
			x++;
		}
		y++;
	}
}
