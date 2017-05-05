/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_v.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 12:48:43 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/26 13:15:22 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*cut_v_n4(char *s, char *d)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		d = ft_remove_n4(s, d, 0);
		i++;
	}
	return (d);
}

static char	*cut_v_n3(char *s, char *d)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		d = ft_remove_n3(s, d, 0);
		i++;
	}
	return (d);
}

static char	*cut_v_n2(char *s, char *d)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		d = ft_remove_n2(s, d, 0);
		i++;
	}
	return (d);
}

static char	*cut_v_n1(char *s, char *d)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != '.')
		{
			d[j] = s[i];
			j++;
		}
		i++;
	}
	d[j] = '\n';
	d[j + 1] = '\0';
	return (d);
}

char		*cut_v(char *s, char *d)
{
	int	i;
	int	count_n;

	i = 0;
	count_n = 1;
	while (s[i])
	{
		if (s[i] == '\n')
			count_n++;
		i++;
	}
	if (count_n == 1)
		cut_v_n1(s, d);
	else if (count_n == 2)
		cut_v_n2(s, d);
	else if (count_n == 3)
		cut_v_n3(s, d);
	else if (count_n == 4)
		cut_v_n4(s, d);
	return (d);
}
