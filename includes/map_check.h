/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:55:48 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/19 18:53:45 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CHECK_H
# define MAP_CHECK_H

t_bool	arg_check(int ac, char *str);
t_bool	map_check(t_mcdata *map, char *file);
char	**setup_cross_check(int fd, char **map);

#endif