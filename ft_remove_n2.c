/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_n2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkyianyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:25:51 by mkyianyt          #+#    #+#             */
/*   Updated: 2016/12/26 15:54:44 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*fill_dest_n2(char *t, char *t_a, char *d, int *i)
{
	int	j;

	j = 0;
	while (t[j])
	{
		if (t[j] == '.' && t_a[j] == '.')
			j++;
		else
		{
			d[*i] = t[j];
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

char		*ft_remove_n2(char *s, char *d, int i)
{
	char	*t1;
	char	*t2;

	t1 = NULL;
	t2 = NULL;
	t1 = create_tmp_str(s, t1, i);
	i = 5;
	t2 = create_tmp_str(s, t2, i);
	i = 0;
	d = fill_dest_n2(t1, t2, d, &i);
	d = fill_dest_n2(t2, t1, d, &i);
	if (i > 0)
		d[i] = '\0';
	return (d);
}
