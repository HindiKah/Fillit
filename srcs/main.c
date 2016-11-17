/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:48:28 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/17 17:35:13 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char **argv)
{
	int i = 0;
	char **pieces;
	char **piece1;
	char **p1res;

	if (argc == 2)
		pieces = ft_strpieces(argv[1], pieces);
	while (i < ft_countpieces(argv[1]))
	{
		ft_putstr(pieces[i]);
		i++;
	}
	if (ft_isvalid(pieces) == 1)
			ft_putstr("\npatern ok !\n");
	piece1 = ft_make_ctab(pieces[2]);
	i = 0;
	while (piece1[i])
	{
		ft_putstr(piece1[i++]);
		ft_putchar('\n');
	}
	ft_putstr("height min = ");
	ft_putnbr(ft_height_begin(piece1));
	ft_putchar('\n');
	ft_putstr("height max = ");
	ft_putnbr(ft_height_end(piece1));
	ft_putchar('\n');
	ft_putstr("width min = ");
	ft_putnbr(ft_width_begin(piece1));
	ft_putchar('\n');
	ft_putstr("width max = ");
	ft_putnbr(ft_width_end(piece1));
	p1res = ft_resize(piece1);
	ft_putchar('\n');
	i = 0;
	while (p1res[i])
	{
		ft_putstr(p1res[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
