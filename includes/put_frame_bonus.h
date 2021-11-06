/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_frame_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:52:49 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/06 19:21:08 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_FRAME_BONUS_H
# define PUT_FRAME_BONUS_H

void	set_animated_collectibles(t_engine *engine);
void	put_collectible_sprite_to_image(t_engine *engine, int i, int j);
void	put_collectible1_sprite_to_image(t_engine *engine, int i, int j);
void	put_collectible2_sprite_to_image(t_engine *engine, int i, int j);
void	put_collectible3_sprite_to_image(t_engine *engine, int i, int j);
void	put_collectible4_sprite_to_image(t_engine *engine, int i, int j);
void	put_collectible5_sprite_to_image(t_engine *engine, int i, int j);
void	monster_event(t_engine *engine);
void	put_monster_sprite_to_image(t_engine *engine, int i, int j);
void	set_patrol_monsters(t_engine *engine);
void	patrol_move_up(t_engine *engine, int x, int y);
void	patrol_move_down(t_engine *engine, int x, int y);
void	put_move_count_to_image(t_engine *engine);

#endif