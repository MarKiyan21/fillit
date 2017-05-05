/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_recursive.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 17:37:50 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/27 17:38:50 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	print_map(char **map)
{
	int i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

static int	recursive(char **map, char **f, int i, int size)
{
	int j;

	i = 0;
	if (!f[0])
		return (1);
	while (i < size + 1)
	{
		j = 0;
		while (put_fgr(map, f, i, j))
		{
			if (recursive(map, ++f, i, size))
				return (1);
			remove_fgr(map, --f);
			j++;
		}
		i++;
	}
	return (0);
}

int			fillit_recursive(char **f)
{
	char	**map;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (f[size])
		size++;
	map = create_map(size);
	while (!(recursive(map, f, i, size)))
	{
		free(map);
		size++;
		map = create_map(size);
	}
	print_map(map);
	return (0);
}
