/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:59:27 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/27 17:28:28 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**fill_r(char **t, int fgr_pos, int i, int j)
{
	char c;

	c = 'A' + fgr_pos;
	t[i][j] = c;
	t[i][j + 1] = c;
	t[i][j + 2] = c;
	t[i][j + 3] = c;
	return (t);
}

char		**put_r(char **t, int fgr_pos, int *j_size, int i)
{
	int succes;
	int j;

	succes = 0;
	while (i < j_size[1])
	{
		j = j_size[0];
		while (j < j_size[1] - 3)
		{
			if (t[i][j] == '.' && t[i][j + 1] == '.'
				&& t[i][j + 2] == '.' && t[i][j + 3] == '.')
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
		return (fill_r(t, fgr_pos, i, j));
	return (0);
}
