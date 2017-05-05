/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_figure.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 15:01:20 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/26 13:09:53 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	n_cnt(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

static int	count_char(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '#')
			count++;
		i++;
	}
	return (count);
}

static char	chck_fgr_n2(char *s)
{
	if (!ft_strcmp(s, ".##\n##.\n"))
		return ('a');
	if (!ft_strcmp(s, "##.\n.##\n"))
		return ('b');
	if (!ft_strcmp(s, "#..\n###\n"))
		return ('c');
	if (!ft_strcmp(s, "..#\n###\n"))
		return ('d');
	if (!ft_strcmp(s, "###\n#..\n"))
		return ('e');
	if (!ft_strcmp(s, "###\n..#\n"))
		return ('f');
	if (!ft_strcmp(s, "##\n##\n"))
		return ('g');
	if (!ft_strcmp(s, ".#.\n###\n"))
		return ('h');
	if (!ft_strcmp(s, "###\n.#.\n"))
		return ('i');
	return (0);
}

static char	chck_fgr_n3(char *s)
{
	if (!ft_strcmp(s, "#.\n#.\n##\n"))
		return ('j');
	if (!ft_strcmp(s, ".#\n.#\n##\n"))
		return ('k');
	if (!ft_strcmp(s, "#.\n##\n#.\n"))
		return ('l');
	if (!ft_strcmp(s, ".#\n##\n.#\n"))
		return ('m');
	if (!ft_strcmp(s, "##\n#.\n#.\n"))
		return ('n');
	if (!ft_strcmp(s, "##\n.#\n.#\n"))
		return ('o');
	if (!ft_strcmp(s, ".#\n##\n#.\n"))
		return ('p');
	if (!ft_strcmp(s, "#.\n##\n.#\n"))
		return ('q');
	return (0);
}

char		check_figure(char *s)
{
	int n_count;

	if (count_char(s) != 4)
		return (0);
	n_count = n_cnt(s);
	if (n_count == 1 && !ft_strcmp(s, "####\n"))
		return ('r');
	if (n_count == 2)
		return (chck_fgr_n2(s));
	if (n_count == 3)
		return (chck_fgr_n3(s));
	if (n_count == 4 && !ft_strcmp(s, "#\n#\n#\n#\n"))
		return ('s');
	return (0);
}
