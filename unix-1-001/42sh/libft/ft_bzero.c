/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaye <mfaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:45:45 by mfaye             #+#    #+#             */
/*   Updated: 2013/11/23 12:12:48 by mfaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*dest;
	int		i;

	dest = (char *) s;
	i = 0;
	while (n != 0)
	{
		dest[i] = 0;
		i++;
		n--;
	}
}