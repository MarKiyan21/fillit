/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_finale_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 17:17:30 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/26 12:37:04 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*create_finale_tab(char *finale_s)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s = (char*)malloc(27);
	while (finale_s[j + 1])
	{
		s[i] = (check_figure(cut_figure(finale_s + j)));
		if (!s[i])
			return (0);
		i++;
		j += 21;
	}
	s[i] = '\0';
	return (s);
}
