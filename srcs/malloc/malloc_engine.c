/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_engine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:35:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/03 14:27:20 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_engine	*malloc_engine(t_engine *engine)
{
	engine = (t_engine *)malloc(sizeof(t_engine) * 1);
	if (engine == NULL)
		return (NULL);
	engine->final_img = (t_img *)malloc(sizeof(t_img) * 1);
	if (engine->final_img == NULL)
		return (NULL);
	engine->sprite = (t_img *)malloc(sizeof(t_img) * 1);
	if (engine->sprite == NULL)
		return (NULL);
	engine->map = (t_map *)malloc(sizeof(t_map) * 1);
	if (engine->map == NULL)
		return (NULL);
	return (engine);
}