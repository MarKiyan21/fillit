/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybchyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 15:36:52 by vrybchyc          #+#    #+#             */
/*   Updated: 2016/12/26 13:29:08 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**str_to_tab(char *s)
{
	char	**t;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	t = (char**)malloc(sizeof(char*) * (size + 1));
	while (s[i])
	{
		t[i] = (char*)malloc(3);
		t[i][0] = s[i];
		t[i][1] = i + '0';
		t[i][2] = '\0';
		i++;
	}
	t[i] = 0;
	return (t);
}
