/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:48:28 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/19 17:38:30 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char **argv)
{
	int i = 0;
	int j;
	char ***all_rpieces;
	char **map;

	map = ft_init_map(5);
	if (argc == 2)
		all_rpieces = ft_put_rpieces(argv[1]);
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
	while (map[i])
		ft_putstr(map[i++]);
	return (0);
}
