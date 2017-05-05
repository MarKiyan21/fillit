/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkyianyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:13:55 by mkyianyt          #+#    #+#             */
/*   Updated: 2016/12/27 17:17:40 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**fill_d(char **t, int fgr_pos, int i, int j)
{
	char c;

	c = 'A' + fgr_pos;
	t[i][j] = c;
	t[i + 1][j - 2] = c;
	t[i + 1][j - 1] = c;
	t[i + 1][j] = c;
	return (t);
}

char		**put_d(char **t, int fgr_pos, int *j_size, int i)
{
	int succes;
	int j;

	succes = 0;
	while (i < j_size[1] - 1)
	{
		j = j_size[0] + 2;
		while (j < j_size[1])
		{
			if (t[i][j] == '.' && t[i + 1][j - 2] == '.'
				&& t[i + 1][j - 1] == '.' &&
				t[i + 1][j] == '.')
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
		return (fill_d(t, fgr_pos, i, j));
	return (0);
}
