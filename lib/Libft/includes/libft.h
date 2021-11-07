/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 19:30:21 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/07 16:40:15 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

# include "get_next_line.h"

# define TRUE 1
# define FALSE 0
# define SUCCESS 0

typedef int	t_bool;

int		ft_atoi_base(char *str, char *base);
int		ft_atoi(const char *str);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	*ft_convert_fullbinary(char *nbr, char *decimal, char *binary);
t_bool	ft_isalnum(int c);
t_bool	ft_isalpha(int c);
t_bool	ft_isascii(int c);
t_bool	ft_isdigit(int c);
t_bool	ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const	char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_utoa_base_uppercase(unsigned int n, char *base);
char	*ft_utoa_base(unsigned int n, char *base);
char	*ft_utoa(unsigned int n);
void	ft_malloc_failed(char *str);
t_bool	ft_open_rdonly(int *fd, char *file);

#endif
