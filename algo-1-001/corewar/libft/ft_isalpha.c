/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaye <mfaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:37:43 by mfaye             #+#    #+#             */
/*   Updated: 2013/11/19 18:41:48 by mfaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	is_alpha;

	is_alpha = ((c >= 0101) && (c <= 0132));
	return (is_alpha || ((c >= 0141) && (c <= 0172)));
}
