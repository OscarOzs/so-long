/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:41:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 16:52:43 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	{
		final_img->keycode = '0';
		return (SUCCESS);
	}
	return (ERROR);
}

int	main(int ac, char **av)
{
	t_engine	*eng;

	eng = NULL;
	eng = malloc_engine(eng);
	if (eng == NULL)
		exit(EXIT_FAILURE);
	if (arg_check(ac, av[1], eng->map) == ERROR)
		exit (EXIT_FAILURE);
	eng->final_img->mlx_ptr = mlx_init();
	eng->final_img->win_ptr = mlx_new_window(eng->final_img->mlx_ptr,
			(eng->map->column_nbr * 32), (eng->map->line_nbr * 32), "so_long");
	eng->final_img->img_ptr = mlx_new_image(eng->final_img->mlx_ptr,
			(eng->map->column_nbr * 32), (eng->map->line_nbr * 32));
	eng->final_img->addr = mlx_get_data_addr(eng->final_img->img_ptr,
			&(eng->final_img->bits_per_pixel), &(eng->final_img->line_length),
			&(eng->final_img->endian));
	mlx_key_hook(eng->final_img->win_ptr, set_keycode, eng->final_img);
	mlx_hook(eng->final_img->win_ptr, 17, 1L << 17, close_window, eng);
	if (BONUS == 1)
		set_bonus_utils_value(eng);
	put_whole_map(eng);
	mlx_loop_hook(eng->final_img->mlx_ptr, render_next_frame, eng);
	mlx_loop(eng->final_img->mlx_ptr);
	return (SUCCESS);
}
