/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:48:28 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/21 14:49:44 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char **argv)
{
	int i = 0;
	int j;
	char ***all_rpieces;
	t_map *mymap;

	if (argc == 2)
		all_rpieces = ft_put_rpieces(argv[1]);
	else
		return (0);
	while (all_rpieces[i])
	{
		j = 0;
		ft_putstr("Piece num ");
		ft_putnbr(i + 1);
		ft_putchar('\n');
		while (all_rpieces[i][j])
		{
			ft_putstr(all_rpieces[i][j++]);
			ft_putchar('\n');
		}
		i++;
		ft_putchar('\n');
	}
	i = 0;
	mymap = ft_init_smap(6);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putchar('\n');
	i = 0;
	while (i < ft_countpieces(argv[1]))
	{
		if (ft_check_pattern(all_rpieces[i]))
		{
			ft_putstr("Piece ");
			ft_putchar('A' + i);
			ft_putstr(" est valide");
		}
		i++;
		ft_putchar('\n');
	}
	mymap = ft_toplace(mymap, all_rpieces[3], 0, 0);
	mymap = ft_toplace(mymap, all_rpieces[1], 2, 0);
	i = 0;
	while (mymap->map[i])
	{
		ft_putstr(mymap->map[i++]);
		ft_putchar('\n');
	}
	mymap = ft_rm_pattern(mymap, all_rpieces[3], 0, 0);
		ft_putchar('\n');
	i = 0;
	while (mymap->map[i])
	{
		ft_putstr(mymap->map[i++]);
		ft_putchar('\n');
	}
	return (0);
}
