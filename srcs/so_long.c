/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:41:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/26 17:41:02 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void check_leaks();

// typedef struct	s_mlx_data
// {
// 	void	*img;
// 	char	*addr;
// 	int		bits_per_pixel;
// 	int		line_length;
// 	int		endian;
// 	void	*mlx;
// 	void	*win;
// }				t_mlxdata;

int main(int ac, char **av)
{
	t_data	map;

	if (arg_check(ac, av[1], &map) == ERROR)
		exit (EXIT_FAILURE);
	// t_data	data;

	// data.mlx = mlx_init();
	// data.win = mlx_new_window(data.mlx, 640, 480, "so-long");
	// data.addr = mlx_get_data_addr(data.img, &data.bits_per_pixel, &data.line_length,
	// &data.endian);
	// mlx_loop(data.mlx);
	
	return (SUCCESS);
}
