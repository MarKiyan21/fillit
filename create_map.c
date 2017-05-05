/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 15:28:58 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/26 15:53:00 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*fill_map(char *s, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		s[i] = '.';
		i++;
	}
	s[i] = '\0';
	return (s);
}

static char	**new_map(int size, char **map)
{
	int i;

	i = 0;
	map = (char**)malloc(sizeof(char*) * (size + 1));
	while (i < size)
	{
		map[i] = (char*)malloc(sizeof(char) * (size + 1));
		map[i] = fill_map(map[i], size);
		i++;
	}
	map[i] = 0;
	return (map);
}

char		**create_map(int size)
{
	char	**map;
	int		n;

	n = 0;
	map = NULL;
	while ((4 * size) > (n * n))
		n++;
	map = new_map(n, map);
	return (map);
}
