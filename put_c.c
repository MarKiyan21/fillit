/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkyianyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:11:48 by mkyianyt          #+#    #+#             */
/*   Updated: 2016/12/27 17:16:58 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**fill_c(char **t, int fgr_pos, int i, int j)
{
	char c;

	c = 'A' + fgr_pos;
	t[i][j] = c;
	t[i + 1][j] = c;
	t[i + 1][j + 1] = c;
	t[i + 1][j + 2] = c;
	return (t);
}

char		**put_c(char **t, int fgr_pos, int *j_size, int i)
{
	int succes;
	int j;

	succes = 0;
	while (i < j_size[1] - 1)
	{
		j = j_size[0];
		while (j < j_size[1] - 2)
		{
			if (t[i][j] == '.' && t[i + 1][j + 1] == '.'
				&& t[i + 1][j + 1] == '.' &&
				t[i + 1][j + 2] == '.')
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
		return (fill_c(t, fgr_pos, i, j));
	return (0);
}
