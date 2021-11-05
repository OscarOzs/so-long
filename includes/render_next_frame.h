/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_next_frame.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:06:12 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/05 16:42:31 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_NEXT_FRAME_H
# define RENDER_NEXT_FRAME_H

void	my_mlx_pixel_put(t_img *img, int x, int y, char *pixel);
void    put_whole_map(t_engine *engine);
int		render_next_frame(t_engine *engine);
void	put_wall_sprite_to_image(t_engine *engine, int i, int j);
void	put_background_sprite_to_image(t_engine *engine, int i, int j);
void	put_player_sprite_to_image(t_engine *engine, int i, int j);
void    set_animated_collectibles(t_engine *engine);
void    put_collectible_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible1_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible2_sprite_to_image(t_engine *engine, int i, int j);
void	put_collectible3_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible4_sprite_to_image(t_engine *engine, int i, int j);
void    put_collectible5_sprite_to_image(t_engine *engine, int i, int j);
void	put_monster_sprite_to_image(t_engine *engine, int i, int j);
void    patrol_move_up(t_engine *engine, int x, int y);
void    patrol_move_down(t_engine *engine, int x, int y);
void	put_move_count_to_image(t_engine *engine);
void    set_patrol_monsters(t_engine *engine);
void	put_exit_sprite_to_image(t_engine *engine, int i, int j);
void	put_exitopen_sprite_to_image(t_engine *engine, int i, int j);
void	find_and_put_exitopen_sprite(t_engine *engine);

#endif