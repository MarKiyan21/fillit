/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:36:47 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/27 18:11:08 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	kostyl_v(char *s, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if ((s[i + 1] == '.' && s[i + 6] == '.' && s[i + 11] == '.'
			&& s[i + 16] == '.') && (s[i] == '#' || s[i + 5] == '#'
			|| s[i + 10] == '#' || s[i + 15] == '#') &&
			((s[i + 2] == '#' || s[i + 7] == '#' || s[i + 12] == '#'
			|| s[i + 17] == '#') || (s[i + 3] == '#' ||
			s[i + 8] == '#' || s[i + 13] == '#' || s[i + 18] == '#')))
			return (1);
		if ((s[i + 2] == '.' && s[i + 7] == '.' && s[i + 12] == '.'
			&& s[i + 17] == '.') && (s[i + 3] == '#' || s[i + 8] == '#'
			|| s[i + 13] == '#' || s[i + 18] == '#') &&
			((s[i] == '#' || s[i + 5] == '#' || s[i + 10] == '#'
			|| s[i + 15] == '#') || (s[i + 1] == '#' || s[i + 6] == '#' ||
			s[i + 11] == '#' || s[i + 16] == '#')))
			return (2);
		i += 21;
	}
	return (0);
}

static int	kostyl_h(char *s, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if ((s[i + 5] == '.' && s[i + 6] == '.' && s[i + 7] == '.'
			&& s[i + 8] == '.') && (s[i] == '#' || s[i + 1] == '#'
			|| s[i + 2] == '#' || s[i + 3] == '#') && ((s[i + 10] == '#'
			|| s[i + 11] == '#' || s[i + 12] == '#' || s[i + 13] == '#') ||
			(s[i + 15] == '#' || s[i + 16] == '#' || s[i + 17] == '#'
			|| s[i + 18] == '#')))
			return (1);
		if ((s[i + 10] == '.' && s[i + 11] == '.' && s[i + 12] == '.'
			&& s[i + 13] == '.') && (s[i + 15] == '#' || s[i + 16] == '#'
			|| s[i + 17] == '#' || s[i + 18] == '#') && ((s[i + 5] == '#'
			|| s[i + 6] == '#' || s[i + 7] == '#' || s[i + 8] == '#') ||
			(s[i] == '#' || s[i + 1] == '#' || s[i + 2] == '#'
			|| s[i + 3] == '#')))
			return (2);
		i += 21;
	}
	return (0);
}

static int	ft_check_str(char *s, int i, int j, int k)
{
	while (s[i])
	{
		if (i > 0 && i == j)
		{
			if (s[i] != '\n')
				return (1);
			j += 21;
			k++;
		}
		else if (i > 0 && i == k)
		{
			if (s[i] != '\n')
				return (2);
			k += 5;
		}
		else if (s[i] != '.' && s[i] != '#')
			return (3);
		i++;
	}
	if (s[i] == '\0' && s[i - 1] == '\n' &&
		(s[i - 2] == '.' || s[i - 2] == '#'))
		return (0);
	return (4);
}

char		*check_valid(char *file_name)
{
	char	*file_str;
	int		ret;
	int		fd;

	file_str = (char*)malloc(550);
	if ((fd = open(file_name, O_RDONLY)) == -1)
	{
		ft_putstr("error\n");
		exit(0);
	}
	ret = read(fd, file_str, 550);
	file_str[ret] = '\0';
	if (ft_check_str(file_str, 0, 20, 4))
		return (0);
	if (ft_strlen(file_str) > 546)
		return (0);
	if ((kostyl_h(file_str, ft_strlen(file_str)))
		|| (kostyl_v(file_str, ft_strlen(file_str))))
		return (0);
	close(fd);
	return (create_finale_tab(file_str));
}
