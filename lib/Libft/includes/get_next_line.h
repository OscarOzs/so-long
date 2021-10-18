/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:01:28 by oozsertt          #+#    #+#             */
/*   Updated: 2021/10/18 18:38:39 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 1
# define TRUE 1
# define FALSE 0
# define ERROR -1

# include "libft.h"

int		get_next_line(int fd, char **line);
int		fill_line(char **line, char *buffer, char **stock);
int		get_line(char **line, char **stock, int *eof);

#endif
