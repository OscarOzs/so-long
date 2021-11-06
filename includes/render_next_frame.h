/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_next_frame.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:06:12 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/06 19:21:46 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_NEXT_FRAME_H
# define RENDER_NEXT_FRAME_H

void	put_whole_map(t_engine *engine);
int		render_next_frame(t_engine *engine);
void	put_wall_sprite_to_image(t_engine *engine, int i, int j);
void	put_background_sprite_to_image(t_engine *engine, int i, int j);
void	put_player_sprite_to_image(t_engine *engine, int i, int j);
void	put_exit_sprite_to_image(t_engine *engine, int i, int j);
void	put_exitopen_sprite_to_image(t_engine *engine, int i, int j);
void	find_and_put_exitopen_sprite(t_engine *engine);

#endif