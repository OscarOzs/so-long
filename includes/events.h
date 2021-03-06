/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:16:52 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/06 18:56:35 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENTS_H
# define EVENTS_H

void	free_space_event(t_engine *engine, int x, int y);
void	exit_event(t_engine *engine);
void	collectibles_event(t_engine *engine, int x, int y);
void	quit_event(t_engine *engine);

#endif