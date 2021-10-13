/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:41:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/13 18:12:30 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <mlx.h>

t_bool	check_arg_format(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (str[--i] != 'r')
		return (ERROR);
	if (str[--i] != 'e')
		return (ERROR);
	if (str[--i] != 'b')
		return (ERROR);
	if (str[--i] != '.')
		return (ERROR);
	if (i == 0)
		return (ERROR);
	else
		return (SUCCESS);
}

t_bool	check_file(char *str)
{
	int	fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (ERROR);
	}
	fd = open(str, O_DIRECTORY);
	if (fd != -1)
	{
		close(fd);
		return (ERROR);
	}
	return (SUCCESS);
}

int main(int ac, char **av)
{
	// number of arguments
	if (ac != 2)
	{
		printf("Error\nInvalid number of arguments\n");
		exit(EXIT_FAILURE);
	}

	// .ber format
	if (check_arg_format(av[1]) == ERROR)
	{
		printf("Error\nFile is not in .ber format\n");
		exit(EXIT_FAILURE);
	}
	
	// file already created, is a directory
	if (check_file(av[1]) == ERROR)
	{
		printf("Error\nInvalid file");
		exit(EXIT_FAILURE);
	}
	return (SUCCESS);
}

