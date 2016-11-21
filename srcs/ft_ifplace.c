/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifplace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 11:41:00 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/21 12:15:34 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_ifplace(t_map *mymap, char **pattern, int x, int y)
{
	int i;
	int j;
	int ret;

	i = 0;
	ret = 0;
	while (x + i < ft_sstrlen(mymap->map) && i < ft_sstrlen(pattern))
	{
		j = 0;
		ft_putstr("\ni = ");
		ft_putnbr(i);
		ft_putchar('\n');
		while (y + j  < ft_strlen(mymap->map[x + i]) && j < ft_strlen(pattern[i]))
		{
			ft_putstr("j = ");
			ft_putnbr(j);
			ft_putchar('\n');
			if (pattern[i][j] <= 'Z' && pattern [i][j] >= 'A'
					&& mymap->map[x + i][y + j] == '.')
				ret++;
			j++;
		}
		i++;
	}
	return (ret == 4 ? 1 : 0);
}
