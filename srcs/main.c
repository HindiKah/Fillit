/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:48:28 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/22 18:12:13 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char **argv)
{
	char ***all_rpieces;
	int nb_piece; 

	if (argc != 2)
		return (0);
	all_rpieces = ft_put_rpieces(argv[1]);
	if (ft_completecheck(argv[1], all_rpieces) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	nb_piece = ft_countpieces(argv[1]);
	ft_fillit(all_rpieces, nb_piece);
	ft_memdel((void**)(all_rpieces));

	return (0);
}
