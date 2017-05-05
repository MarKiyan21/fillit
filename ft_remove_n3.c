/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_n3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkyianyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:35:52 by mkyianyt          #+#    #+#             */
/*   Updated: 2016/12/15 15:36:51 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*fill_dest_n3(char **t, char *d, int *i, int n)
{
	int	j;

	j = 0;
	while (t[n][j])
	{
		if (t[0][j] == '.' && t[1][j] == '.' && t[2][j] == '.')
			j++;
		else
		{
			d[*i] = t[n][j];
			j++;
			*i += 1;
		}
	}
	if (*i > 0)
	{
		d[*i] = '\n';
		*i += 1;
	}
	return (d);
}

char		*ft_remove_n3(char *s, char *d, int i)
{
	char	**tab;

	tab = (char**)malloc(sizeof(char*) * 4);
	tab[0] = create_tmp_str(s, tab[0], i);
	i = 5;
	tab[1] = create_tmp_str(s, tab[1], i);
	i = 10;
	tab[2] = create_tmp_str(s, tab[2], i);
	i = 0;
	d = fill_dest_n3(tab, d, &i, 0);
	d = fill_dest_n3(tab, d, &i, 1);
	d = fill_dest_n3(tab, d, &i, 2);
	if (i > 0)
		d[i] = '\0';
	return (d);
}
