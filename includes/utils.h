/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:25:33 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/05 18:43:00 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	my_mlx_pixel_put(t_img *img, int x, int y, char *pixel);
int		close_window(t_engine *engine);
void	set_bonus_utils_value(t_engine *engine);

#endif