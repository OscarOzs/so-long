/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:07:18 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/05 14:46:22 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*tempfill;

	i = 0;
	tempfill = b;
	while (i < len)
	{
		*tempfill = c;
		i++;
		tempfill++;
	}
	return (b);
}
