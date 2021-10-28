/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:55:48 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/26 15:19:41 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CHECK_H
# define MAP_CHECK_H

t_bool	arg_check(int ac, char *str, t_data *map);
t_bool	map_check(t_data *map, char *file);
t_data	*create_map(int fd, char *file, t_data *map);
t_bool	cross_check(t_data *map);
t_bool	final_check(t_data *map);

#endif