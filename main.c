/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:41:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/18 18:54:44 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char **av)
{
	if (arg_check(ac, av[1]) == ERROR)
		exit(EXIT_FAILURE);
	return (SUCCESS);
}

// note du 18 octobre : algo pour check map done sur telephone
// probleme avec appel de gnl autrepart que dans main