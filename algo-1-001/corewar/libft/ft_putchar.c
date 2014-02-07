/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaye <mfaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:41:00 by mfaye             #+#    #+#             */
/*   Updated: 2013/11/22 10:41:54 by mfaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <wchar.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putwchar(wchar_t c)
{
	write(1, &c, 1);
}