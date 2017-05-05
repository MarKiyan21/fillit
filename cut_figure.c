/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_figure.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:01:06 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/26 16:54:04 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*create_str(char *s, char *finale_figure, int i, int k)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		finale_figure[i] = s[k];
		j++;
		k++;
		i++;
	}
	finale_figure[i] = '\n';
	return (finale_figure);
}

static char	*cut_h(char *s, char *finale_figure)
{
	int	k;
	int	i;

	k = 0;
	i = 0;
	while (k < 20)
	{
		if (s[k + 0] == '.' && s[k + 1] == '.' && s[k + 2] == '.'
			&& s[k + 3] == '.')
			k += 5;
		else
		{
			create_str(s, finale_figure, i, k);
			i += 5;
			k += 5;
		}
	}
	finale_figure[i - 1] = '\0';
	return (finale_figure);
}

char		*cut_figure(char *s)
{
	char *finale_figure;
	char *d;

	finale_figure = (char*)malloc(sizeof(char) * 21);
	d = (char*)malloc(sizeof(char) * 21);
	finale_figure = cut_h(s, finale_figure);
	finale_figure = cut_v(finale_figure, d);
	free(d);
	return (finale_figure);
}
