/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_animated_collectibles_bonus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:36:18 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 17:39:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_collectible1_sprite_to_image(t_engine *eng, int i, int j)
{
	char	*text_pixel;
	int		x;
	int		y;
	int		width;
	int		height;

	width = 32;
	height = 32;
	eng->sprite->img_ptr = mlx_xpm_file_to_image(eng->final_img->mlx_ptr,
			"./textures/Collectibles/Coin1.xpm", &width, &height);
	eng->sprite->addr = mlx_get_data_addr(eng->sprite->img_ptr, &eng->sprite
			->bits_per_pixel, &eng->sprite->line_length, &eng->sprite->endian);
	y = -1;
	while (++y < 32)
	{
		x = -1;
		while (++x < 32)
		{
			text_pixel = eng->sprite->addr + (y * eng->sprite->line_length
					+ x * (eng->sprite->bits_per_pixel / 8));
			if (text_pixel[0] != 0 && text_pixel[1] != 0 && text_pixel[2] != 0)
				my_mlx_pixel_put(eng->final_img, x + i, y + j, text_pixel);
		}
	}
	free_image(eng);
}

void	put_collectible2_sprite_to_image(t_engine *eng, int i, int j)
{
	char	*text_pixel;
	int		x;
	int		y;
	int		width;
	int		height;

	width = 32;
	height = 32;
	eng->sprite->img_ptr = mlx_xpm_file_to_image(eng->final_img->mlx_ptr,
			"./textures/Collectibles/Coin2.xpm", &width, &height);
	eng->sprite->addr = mlx_get_data_addr(eng->sprite->img_ptr, &eng->sprite
			->bits_per_pixel, &eng->sprite->line_length, &eng->sprite->endian);
	y = -1;
	while (++y < 32)
	{
		x = -1;
		while (++x < 32)
		{
			text_pixel = eng->sprite->addr + (y * eng->sprite->line_length
					+ x * (eng->sprite->bits_per_pixel / 8));
			if (text_pixel[0] != 0 && text_pixel[1] != 0 && text_pixel[2] != 0)
				my_mlx_pixel_put(eng->final_img, x + i, y + j, text_pixel);
		}
	}
	free_image(eng);
}

void	put_collectible3_sprite_to_image(t_engine *eng, int i, int j)
{
	char	*text_pixel;
	int		x;
	int		y;
	int		width;
	int		height;

	width = 32;
	height = 32;
	eng->sprite->img_ptr = mlx_xpm_file_to_image(eng->final_img->mlx_ptr,
			"./textures/Collectibles/Coin3.xpm", &width, &height);
	eng->sprite->addr = mlx_get_data_addr(eng->sprite->img_ptr, &eng->sprite
			->bits_per_pixel, &eng->sprite->line_length, &eng->sprite->endian);
	y = -1;
	while (++y < 32)
	{
		x = -1;
		while (++x < 32)
		{
			text_pixel = eng->sprite->addr + (y * eng->sprite->line_length
					+ x * (eng->sprite->bits_per_pixel / 8));
			if (text_pixel[0] != 0 && text_pixel[1] != 0 && text_pixel[2] != 0)
				my_mlx_pixel_put(eng->final_img, x + i, y + j, text_pixel);
		}
	}
	free_image(eng);
}

void	put_collectible4_sprite_to_image(t_engine *eng, int i, int j)
{
	char	*text_pixel;
	int		x;
	int		y;
	int		width;
	int		height;

	width = 32;
	height = 32;
	eng->sprite->img_ptr = mlx_xpm_file_to_image(eng->final_img->mlx_ptr,
			"./textures/Collectibles/Coin4.xpm", &width, &height);
	eng->sprite->addr = mlx_get_data_addr(eng->sprite->img_ptr, &eng->sprite
			->bits_per_pixel, &eng->sprite->line_length, &eng->sprite->endian);
	y = -1;
	while (++y < 32)
	{
		x = -1;
		while (++x < 32)
		{
			text_pixel = eng->sprite->addr + (y * eng->sprite->line_length
					+ x * (eng->sprite->bits_per_pixel / 8));
			if (text_pixel[0] != 0 && text_pixel[1] != 0 && text_pixel[2] != 0)
				my_mlx_pixel_put(eng->final_img, x + i, y + j, text_pixel);
		}
	}
	free_image(eng);
}

void	put_collectible5_sprite_to_image(t_engine *eng, int i, int j)
{
	char	*text_pixel;
	int		x;
	int		y;
	int		width;
	int		height;

	width = 32;
	height = 32;
	eng->sprite->img_ptr = mlx_xpm_file_to_image(eng->final_img->mlx_ptr,
			"./textures/Collectibles/Coin5.xpm", &width, &height);
	eng->sprite->addr = mlx_get_data_addr(eng->sprite->img_ptr, &eng->sprite
			->bits_per_pixel, &eng->sprite->line_length, &eng->sprite->endian);
	y = 0;
	while (y++ < 32)
	{
		x = 0;
		while (x++ < 32)
		{
			text_pixel = eng->sprite->addr + (y * eng->sprite->line_length
					+ x * (eng->sprite->bits_per_pixel / 8));
			if (text_pixel[0] != 0 && text_pixel[1] != 0 && text_pixel[2] != 0)
				my_mlx_pixel_put(eng->final_img, x + i, y + j, text_pixel);
		}
	}
	free_image(eng);
}
