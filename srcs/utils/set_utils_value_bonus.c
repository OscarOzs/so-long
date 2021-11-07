/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_utils_value_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:18:47 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 17:30:24 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_bonus_utils_value(t_engine *engine)
{
	engine->sprite->sprite_anim = 0;
	engine->sprite->sprite_anim_monster = 0;
	engine->map->move_count = 0;
}
