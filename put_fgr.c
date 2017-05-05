/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_fgr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 13:06:45 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/27 17:12:29 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**put_k_s(char **map, char **t, int i, int *j_size)
{
	int	fgr_pos;

	fgr_pos = t[0][1] - '0';
	if (t[0][0] == 'k')
		return (put_k(map, fgr_pos, j_size, i));
	if (t[0][0] == 'l')
		return (put_l(map, fgr_pos, j_size, i));
	if (t[0][0] == 'm')
		return (put_m(map, fgr_pos, j_size, i));
	if (t[0][0] == 'n')
		return (put_n(map, fgr_pos, j_size, i));
	if (t[0][0] == 'o')
		return (put_o(map, fgr_pos, j_size, i));
	if (t[0][0] == 'p')
		return (put_p(map, fgr_pos, j_size, i));
	if (t[0][0] == 'q')
		return (put_q(map, fgr_pos, j_size, i));
	if (t[0][0] == 'r')
		return (put_r(map, fgr_pos, j_size, i));
	if (t[0][0] == 's')
		return (put_s(map, fgr_pos, j_size, i));
	return (0);
}

static char	**put_a_j(char **map, char **t, int i, int *j_size)
{
	int	fgr_pos;

	fgr_pos = t[0][1] - '0';
	if (t[0][0] == 'a')
		return (put_a(map, fgr_pos, j_size, i));
	if (t[0][0] == 'b')
		return (put_b(map, fgr_pos, j_size, i));
	if (t[0][0] == 'c')
		return (put_c(map, fgr_pos, j_size, i));
	if (t[0][0] == 'd')
		return (put_d(map, fgr_pos, j_size, i));
	if (t[0][0] == 'e')
		return (put_e(map, fgr_pos, j_size, i));
	if (t[0][0] == 'f')
		return (put_f(map, fgr_pos, j_size, i));
	if (t[0][0] == 'g')
		return (put_g(map, fgr_pos, j_size, i));
	if (t[0][0] == 'h')
		return (put_h(map, fgr_pos, j_size, i));
	if (t[0][0] == 'i')
		return (put_i(map, fgr_pos, j_size, i));
	if (t[0][0] == 'j')
		return (put_j(map, fgr_pos, j_size, i));
	return (0);
}

char		**put_fgr(char **map, char **t, int i, int j)
{
	int		size;
	int		*j_size;

	j_size = (int*)malloc(sizeof(int) * 2);
	size = 0;
	while (map[size])
		size++;
	j_size[0] = j;
	j_size[1] = size;
	if (t[0][0] < 'k')
		return (put_a_j(map, t, i, j_size));
	else
		return (put_k_s(map, t, i, j_size));
}
