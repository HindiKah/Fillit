/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:48:28 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/17 14:54:46 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char **argv)
{
	int i = 0;
	char **pieces;
	char **piece1;
	if (argc == 2)
		pieces = ft_strpieces(argv[1], pieces);
	while (i < ft_countpieces(argv[1]))
	{
		ft_putstr(pieces[i]);
		i++;
	}
	if (ft_isvalid(pieces) == 1)
			ft_putstr("\npatern ok !\n");
	piece1 = ft_make_ctab(pieces[1]);
	i = 0;
	while (piece1[i])
	{
		ft_putstr(piece1[i++]);
		ft_putchar('\n');
	}
	return (0);
}
