/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:55:48 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/20 18:00:48 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CHECK_H
# define MAP_CHECK_H

t_bool	arg_check(int ac, char *str);
t_bool	map_check(t_mcdata *map, char *file);
char	**setup_cross_check(int fd, char **map, char *file, t_mcdata *mapdata);
t_bool	cross_check(char **map, t_mcdata *mapdata);
t_bool final_check(t_mcdata *mapdata);

#endif