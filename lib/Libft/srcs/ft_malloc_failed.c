/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_failed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:23:04 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/19 17:24:15 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_malloc_failed(char *str)
{
	if (str == NULL)
	{
		printf("Error\nMalloc failed");
		exit(EXIT_FAILURE);
	}
}
