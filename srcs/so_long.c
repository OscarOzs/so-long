/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:41:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/28 13:26:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void check_leaks();

typedef struct	s_mlx_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;

	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_mlxdata *data, int x, int y, int color)
{
	int		*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

// void	render_next_frame(t_mlxdata *data)
// {
// 	
// }

int main(int ac, char **av)
{
	t_data		map;
	t_data		img;

	if (arg_check(ac, av[1], &map) == ERROR)
		exit (EXIT_FAILURE);

	img.mlx_ptr = mlx_init();
	img.win_ptr = mlx_new_window(img.mlx_ptr, 640, 480, "so-long");
	// data.img_ptr = mlx_new_image(data.mlx_ptr, 640, 480);
	// data.addr = mlx_get_data_addr(data.img_ptr, &(data.bits_per_pixel), &(data.line_length), &(data.endian));
	// render_next_frame(&data);

	// char *brick_path = "./textures/bricks.xpm";
	// char *gladiator_path = "./textures/gladiator.xpm";
	// int	img_width = 32;
	// int	img_height = 32;
	// char	*pixel;
	// t_mlxdata		sprite;

	// sprite.img_ptr = mlx_xpm_file_to_image(sprite.mlx_ptr, brick_path, &img_width, &img_height);
	// sprite.addr = mlx_get_data_addr(sprite.img_ptr, &sprite.bits_per_pixel, &sprite.line_length,
	// &sprite.endian);
	// char *offset = sprite.addr + (1 * sprite.line_length + 1 * (sprite.bits_per_pixel / 8));
	// pixel = data.addr + (1 * data.line_length + 1 * (data.bits_per_pixel / 8));
	// *(int*)pixel = *(int*)offset;
	
	// mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, data.img_ptr, 0, 0);
	// mlx_loop(data.mlx_ptr);
	return (SUCCESS);
}
