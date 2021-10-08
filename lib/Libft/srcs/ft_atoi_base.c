/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:43:11 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/05 15:54:09 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (FALSE);
		if (base[i] <= 32 || base[i] > 126)
			return (FALSE);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

static int	ft_check_str(char *str, char *base)
{
	int		i;
	int		j;
	size_t	count;

	i = -1;
	j = 0;
	count = 0;
	if (str[++i] == '-')
		count++;
	while (str[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				count++;
			j++;
		}
		j = 0;
		i++;
	}
	if (ft_strlen(str) == count)
		return (TRUE);
	else
		return (FALSE);
}

static int	ft_place_in_base(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (FALSE);
}

int	ft_atoi_base(char *str, char *base)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	i = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (ft_check_base(base) == 1 && ft_check_str(str, base) == 1)
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		while (str[i] != '\0')
		{
			res = res * ft_strlen(base) + ft_place_in_base(str[i], base);
			i++;
		}
	}
	return (res * sign);
}
