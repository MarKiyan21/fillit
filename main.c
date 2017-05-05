/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkyianyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 13:43:16 by mkyianyt          #+#    #+#             */
/*   Updated: 2016/12/26 18:21:25 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		i;
	char	**f;
	char	*s;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit [file]\n");
		return (0);
	}
	i = 0;
	if (!(s = check_valid(argv[1])))
	{
		ft_putstr("error\n");
		return (0);
	}
	f = str_to_tab(s);
	fillit_recursive(f);
	return (0);
}
