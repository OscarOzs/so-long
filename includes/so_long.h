/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:05:52 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/03 14:22:43 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// lib
# include "libft.h"
# include "mlx.h"

// define
# include "define.h"

// struct
# include "struct_map_parsing.h"
# include "struct_img.h"
# include "struct_engine.h"
# include "malloc_engine.h"

// utils
# include "utils.h"

// map check
# include "map_parsing.h"

// events
# include "events.h"

// movements
# include "movements.h"

# include "render_next_frame.h"

# define DEBUG printf("ICI\n");
# define PRINTD(x) printf("%d\n", x);
# define PRINTS(x) printf("%s\n", x);
# define PRINTC(x) printf("%c\n", x);

#endif