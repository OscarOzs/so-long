/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:16:52 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/31 19:58:38 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENTS_H
# define EVENTS_H

void	free_space_event(t_map *map, int x, int y);
void	exit_event(t_engine *engine);
void	collectibles_event(t_map *map, int x, int y);
void	monster_event(t_engine *engine);
void	quit_event(t_engine *engine);

#endif