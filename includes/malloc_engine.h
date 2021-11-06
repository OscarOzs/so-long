/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_engine.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:36:57 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/06 19:22:51 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_ENGINE_H
# define MALLOC_ENGINE_H

t_engine	*malloc_engine(t_engine *engine);
void		free_engine(t_engine *engine);
void		free_image(t_engine *engine);

#endif