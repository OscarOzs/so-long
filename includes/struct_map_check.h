/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_map_check.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:35:34 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/19 14:44:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_PARSING_MAP_H
# define STRUCT_PARSING_MAP_H

typedef struct	s_mcdata
{
	int	line_len;
	int	line_nbr;
	int	column_nbr;
	int	position_nbr;
	int	exit_nbr;
	int	collectibles_nbr;
}				t_mcdata;

#endif