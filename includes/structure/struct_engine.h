/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_engine.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:56:37 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/31 14:57:04 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_ENGINE_H
# define STRUCT_ENGINE_H

typedef struct	s_engine
{
	t_map	*map;
	t_img	*final_img;
	t_img	*sprite;
	t_pecm	*pecm_info;
}				t_engine;

#endif