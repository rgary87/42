/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dircontent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgary <rgary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 15:11:21 by rgary             #+#    #+#             */
/*   Updated: 2013/12/26 11:03:24 by rgary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_list_dir_content(void)
{
	DIR					*current_dir;
	struct dirent		*dp;
	char				*str;
	int					i;

	i = 0;
	dp = (struct dirent*)malloc(sizeof(struct dirent));
	current_dir = opendir(".");
	if (current_dir)
	{
		while ((dp = readdir(current_dir)) != NULL)
		{
			str = (char*)dp->d_name;
			i++;
		}
		closedir(current_dir);
	}
}
