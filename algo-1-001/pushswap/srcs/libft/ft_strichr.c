/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strichr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgary <rgary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 17:57:36 by rgary             #+#    #+#             */
/*   Updated: 2013/12/08 09:41:22 by rgary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strichr(char *str, int l)
{
	char	c;
	int		i;

	i = 0;
	c = (char)l;
	while (str[i] != c)
	{
		if (str[i] == '\0' && c != '\0')
			return (-1);
		i++;
	}
	return (i);
}
