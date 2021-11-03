/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_next_frame.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:06:12 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/03 15:00:46 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_NEXT_FRAME_H
# define RENDER_NEXT_FRAME_H

void	my_mlx_pixel_put(t_img *img, int x, int y, char *pixel);
int		render_next_frame(t_engine *engine);
void	put_next_frame(t_engine *engine);
void	put_wall_sprite_to_image(t_engine *engine, int i, int j);
void	put_background_sprite_to_image(t_engine *engine, int i, int j);
void	put_player_sprite_to_image(t_engine *engine, int i, int j);
void	put_collectibles_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible1_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible2_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible3_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible4_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible5_sprite_to_image(t_engine *engine, int i, int j);
void	put_monster_sprite_to_image(t_engine *engine, int i, int j);
t_bool	put_patrol_monster_sprite(t_engine *engine, int i, int j);
void	put_exit_sprite_to_image(t_engine *engine, int i, int j);
void	put_exitopen_sprite_to_image(t_engine *engine, int i, int j);

#endif