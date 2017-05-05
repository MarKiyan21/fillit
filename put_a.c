/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:36:00 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/27 17:32:14 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**fill_a(char **t, int fgr_pos, int i, int j)
{
	char c;

	c = 'A' + fgr_pos;
	t[i][j] = c;
	t[i][j + 1] = c;
	t[i + 1][j - 1] = c;
	t[i + 1][j] = c;
	return (t);
}

char		**put_a(char **t, int fgr_pos, int *j_size, int i)
{
	int succes;
	int j;

	succes = 0;
	while (i < j_size[1] - 1)
	{
		j = j_size[0] + 1;
		while (j < j_size[1] - 1)
		{
			if (t[i][j] == '.' && t[i][j + 1] == '.'
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
		return (fill_a(t, fgr_pos, i, j));
	return (0);
}
