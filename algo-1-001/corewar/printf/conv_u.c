/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaye <mfaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 16:32:23 by mfaye             #+#    #+#             */
/*   Updated: 2013/12/20 16:32:26 by mfaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "ftprintf.h"

int			basic_u_conv(va_list *ap, t_format *format)
{
	unsigned int		conv;
	char				*s;
	size_t				len;

	conv = va_arg(*ap, unsigned int);
	s = ft_utoa(conv, 10);
	apply_flags(&s, format);
	len = ft_strlen(s);
	write(FD_OUT, s, len);
	return (len);
}

static void	add_basic(t_conv **list)
{
	add_conv(list, create_conv('u', basic_u_conv));
}

void		add_u_func(t_conv **list)
{
	add_basic(list);
}