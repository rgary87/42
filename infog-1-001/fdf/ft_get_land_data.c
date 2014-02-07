/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_land_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgary <rgary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 12:08:40 by rgary             #+#    #+#             */
/*   Updated: 2013/12/18 10:20:42 by rgary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "fdf.h"

int		*get_n_line(int fd, t_rot *rot)
{
	char	**tab;
	char	*line;
	int		*tabint;
	int		size;
	int		i;

	size = 0;
	i = -1;
	if (get_next_line(fd, &line) < 1)
		return (NULL);
	tab = ft_str_nbr_split(line);
	while (tab[size])
		++size;
	if (!(tabint = (int*)malloc(sizeof(int) * size)))
		exit (1);
	while (++i < size)
		tabint[i] = ft_atoi(tab[i]);
	rot->sizex = size;
	return (tabint);
}

int		**ft_get_data(const char *str, t_rot *rot)
{
	int		fd;
	int		**tab;
	int		i;
	int		n;
	int		**tabtmp;

	i = 0;
	fd = open(str, O_RDONLY);
	if (!(tab = (int**)malloc(sizeof(int*))))
		exit (1);
	tab[i] = get_n_line(fd, rot);
	while (tab[i++] != NULL)
	{
		n = -1;
		if (!(tabtmp = (int**)malloc(sizeof(int*) * (i + 1))))
			exit (1);
		while (++n < i)
			tabtmp[n] = tab[n];
		free(tab);
		tab = tabtmp;
		tab[i] = get_n_line(fd, rot);
	}
	rot->sizey = i - 1;
	return (tab);
}
