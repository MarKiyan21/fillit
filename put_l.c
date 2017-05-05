/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_l.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:25:30 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/27 17:23:36 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**fill_l(char **t, int fgr_pos, int i, int j)
{
	char c;

	c = 'A' + fgr_pos;
	t[i][j] = c;
	t[i + 1][j] = c;
	t[i + 1][j + 1] = c;
	t[i + 2][j] = c;
	return (t);
}

char		**put_l(char **t, int fgr_pos, int *j_size, int i)
{
	int succes;
	int j;

	succes = 0;
	while (i < j_size[1] - 2)
	{
		j = j_size[0];
		while (j < j_size[1] - 1)
		{
			if (t[i][j] == '.' && t[i + 1][j] == '.'
				&& t[i + 1][j + 1] == '.' && t[i + 2][j] == '.')
			{
				succes = 1;
				break ;
			}
			j++;
		}
		if (succes == 1)
			break ;
		i++;
	}
	if (succes == 1)
		return (fill_l(t, fgr_pos, i, j));
	return (0);
}
