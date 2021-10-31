/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:20:23 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/31 19:29:49 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVEMENTS_H
# define MOVEMENTS_H

void	move_up(t_engine *engine, int x, int y);
void	move_down(t_engine *engine, int x, int y);
void	move_right(t_engine *engine, int x, int y);
void	move_left(t_engine *engine, int x, int y);

#endif