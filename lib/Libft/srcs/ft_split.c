/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 00:46:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/05 14:55:53 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_word(char const *str, char c)
{
	size_t	size;
	int		i;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && str[i] != c)
		{
			size++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (size);
}

static	char	**ft_malloc_str(char **strs, char const *str, char c)
{
	int	i;
	int	len;
	int	size;

	i = 0;
	len = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i] != '\0')
		{
			while (str[i] != c && str[i++] != '\0')
				len++;
			strs[size] = (char *)malloc(sizeof(char) * (len + 1));
			if (strs[size] == NULL)
				return (NULL);
			strs[size++][len] = '\0';
			len = 0;
		}
		else
			i++;
	}
	return (strs);
}

static	char	**ft_fill_tab(char const *str, char **strs, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[j] != '\0')
	{
		if (str[j] != '\0' && str[j] != c)
		{
			while (str[j] != '\0' && str[j] != c)
			{
				strs[i][k] = str[j];
				j++;
				k++;
			}
			i++;
			k = 0;
		}
		else
			j++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char		**finaltab;
	size_t		finaltab_len;

	if (s == NULL)
		return (NULL);
	finaltab_len = ft_count_word(s, c);
	finaltab = (char **)malloc(sizeof(char *) * (finaltab_len + 1));
	if (finaltab == NULL)
		return (NULL);
	finaltab[finaltab_len] = NULL;
	finaltab = ft_malloc_str(finaltab, s, c);
	finaltab = ft_fill_tab(s, finaltab, c);
	return (finaltab);
}
