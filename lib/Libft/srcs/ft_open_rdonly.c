/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_rdonly.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:39:48 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 16:39:56 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_open_rdonly(int *fd, char *file)
{
	*fd = open(file, O_RDONLY);
	if (*fd == -1)
	{
		close(*fd);
		return (ERROR);
	}
	return (SUCCESS);
}
