/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:41:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/31 20:09:35 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void check_leaks();

static int	set_keycode(int keycode, t_img *final_img)
{
	if (keycode == W_KEY)
		final_img->keycode = 'w';
	else if (keycode == D_KEY)
		final_img->keycode = 'd';
	else if (keycode == S_KEY)
		final_img->keycode = 's';
	else if (keycode == A_KEY)
		final_img->keycode = 'a';
	else if (keycode == ESC_KEY)
		final_img->keycode = 'e';
	else
		final_img->keycode = '0';
}

int main(int ac, char **av)
{
	t_engine	*engine;

	engine = malloc_engine(engine);
	if (engine == NULL)
		exit(EXIT_FAILURE);
	if (arg_check(ac, av[1], engine->map) == ERROR)
		exit (EXIT_FAILURE);

	engine->final_img->mlx_ptr = mlx_init();
	engine->sprite->mlx_ptr = mlx_init();
	engine->final_img->win_ptr = mlx_new_window(engine->final_img->mlx_ptr, (engine->map->column_nbr * 32), (engine->map->line_nbr * 32), "so-long");
	engine->final_img->img_ptr = mlx_new_image(engine->final_img->mlx_ptr, (engine->map->column_nbr * 32), (engine->map->line_nbr * 32));
	engine->final_img->addr = mlx_get_data_addr(engine->final_img->img_ptr, &(engine->final_img->bits_per_pixel), &(engine->final_img->line_length), &(engine->final_img->endian));

	mlx_key_hook(engine->final_img->win_ptr, set_keycode, engine->final_img);
	mlx_loop_hook(engine->final_img->mlx_ptr, set_next_frame, engine);
	mlx_loop(engine->final_img->mlx_ptr);
	return (SUCCESS);
}