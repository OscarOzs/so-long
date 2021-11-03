/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:22:45 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/02 16:54:43 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_window(int keycode, t_engine *engine)
{
	(void)engine;
	(void)keycode;
	exit(EXIT_SUCCESS);
	return (TRUE);
}
