/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:21:25 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/05 15:05:14 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size_nbr(long nbr)
{
	int	count;

	if (nbr < 0)
	{
		count = 1;
		nbr *= -1;
	}
	else
		count = 0;
	while (nbr >= 10)
	{
		nbr /= 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	size_t	len_str;
	long	nbr;

	nbr = n;
	len_str = ft_get_size_nbr(nbr);
	str = (char *)malloc(sizeof(char) * (len_str + 1));
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[len_str] = '\0';
	len_str--;
	while (nbr >= 10)
	{
		str[len_str] = (nbr % 10) + '0';
		nbr /= 10;
		len_str--;
	}
	str[len_str] = nbr + '0';
	return (str);
}
