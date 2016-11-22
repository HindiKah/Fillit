/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:27:46 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/22 12:19:17 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_solve(t_map *mymap, char ***all_rpieces, int nb_piece)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	
			ft_displaymap(mymap);
			ft_putchar('\n');
	if (!all_rpieces)
		return (mymap);
	while (x < mymap->size)
	{
		y = 0;
		while (y < mymap->size)
		{
			if (ft_ifplace(mymap, all_rpieces[i], x, y))
			{
				if (!ft_solve(ft_place(mymap, all_rpieces[i], x, y), &(all_rpieces[i + 1]), nb_piece - 1))
				{
					ft_rm_pattern(mymap, all_rpieces[i], x, y);
				}
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
