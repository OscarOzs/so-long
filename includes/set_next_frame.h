/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_next_frame.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:06:12 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/31 17:34:49 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_NEXT_FRAME_H
# define SET_NEXT_FRAME_H

void	my_mlx_pixel_put(t_img *img, int x, int y, char *pixel);
int		set_next_frame(t_engine *engine);

#endif