/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_pieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 11:20:11 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/15 11:50:17 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_pieces(char *file)
{
	char	buf;
	int		file_d;
	int		ret;
	int		nb_p;
	char	tmp;

	nb_p = 0;
	file_d = open(file, O_RDONLY);
	while ((ret = read(file_d, &buf, 1)) > 0)
	{
		if (buf == 'n\' && tmp == '\n')
			nb_p++;
		tmp = buf;
	}
	return (nb_p);
}
