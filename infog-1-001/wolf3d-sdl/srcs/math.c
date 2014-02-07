/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgary <rgary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 17:19:34 by rgary             #+#    #+#             */
/*   Updated: 2014/01/06 17:20:10 by rgary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "wolf3d.h"

int		ft_abs(int x)
{
	int		i;

	i = (x < 0 ? x *= -1 : x);
	return (i);
}
