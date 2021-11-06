/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_map_parsing.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:35:34 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/06 19:24:56 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_MAP_PARSING_H
# define STRUCT_MAP_PARSING_H

typedef struct s_map_data
{
	char	**map;
	int		line_len;
	int		line_nbr;
	int		column_nbr;
	int		position_nbr;
	int		exit_nbr;
	int		collectibles_nbr;
	int		monster_nbr;
	int		move_count;
}				t_map;

#endif