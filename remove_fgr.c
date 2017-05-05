/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_fgr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 16:34:00 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/26 13:03:44 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	remove_fgr(char **map, char **f)
{
	int		i;
	int		j;
	int		fgr_pos;
	char	c;

	i = 0;
	fgr_pos = f[0][1] - '0';
	c = 'A' + fgr_pos;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == c)
				map[i][j] = '.';
			j++;
		}
		i++;
	}
}
