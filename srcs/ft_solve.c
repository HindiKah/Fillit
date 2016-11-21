/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:27:46 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/21 19:42:23 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_solve(t_map *mymap, char ***all_rpieces, int level)
{
	int		i;
	int		x;
	int		y;
	int		tmpcoords[2];

	tmpcoords[0] = -1;
	tmpcoords[1] = -1;
	i = 0;
	x = 0;
	y = 0;
	while (all_rpieces[i])
	{
		while (x < mymap->size)
		{
			y = 0;
			while (y < mymap->size)
			{
				if (ft_ifplace(mymap, all_rpieces[i], x, y))
				{
					if (ft_solve(ft_place(mymap, all_rpieces[i], x, y), &(all_rpieces[i + 1]), level + 1))
						return (mymap);
					tmpcoords[0] = x;
					tmpcoords[1] = y;
					x = mymap->size - 1;
					y = mymap->size - 1;
				}
				y++;
			}
			x++;
		}
		if (tmpcoords[0] >= 0 && tmpcoords[1] >= 0)
			ft_rm_pattern(mymap, all_rpieces[i], tmpcoords[0], tmpcoords[1]);
		return (NULL);
	}
	return (mymap);
}

/*
t_map	*ft_solve(t_map *mymap, char ***all_rpieces)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (all_rpieces[i])
	{
		while (x < mymap->size)
		{
			y = 0;
			while (y < mymap->size)
			{
				if (ft_ifplace(mymap, *all_rpieces, x, y))
				{
					ft_displaymap(mymap);
					ft_putstr("\n\n");
					if (!(ft_solve(ft_place(mymap, all_rpieces[i++], x, y), &(all_rpieces[i + 1]))))
						return (ft_rm_pattern(mymap, all_rpieces[i], x, y));
				}
				y++;
			}
			x++;
		}
		if (x == mymap->size && y == mymap->size)
			return (NULL);
	}
	return (mymap);
}

*/
