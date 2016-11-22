/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:48:28 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/22 12:20:13 by arive-de         ###   ########.fr       */
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
	i = 0;
		ft_putchar('\n');
	int size = 2;
	mymap = NULL;
	int nb_piece = ft_countpieces(argv[1]);
	while (mymap == NULL)
	{
		mymap = ft_init_smap(size++);
		mymap = ft_solve(mymap, all_rpieces, nb_piece);
	}
		ft_putchar('\n');
		ft_putchar('\n');
	i = 0;
	return (0);
}
