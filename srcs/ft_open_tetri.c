/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:47:51 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/15 12:31:39 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_open_tetri(char *file, int nb_piece, t_piece *my_piece)
{
	int		i;
	int		line;
	int		num_p;
	char	buf;
	int		file_d;
	int		ret;

	i = 0;
	line = 0;
	num_p = 0;
	file_d = open(file, O_RDONLY);
	while ((ret = read(file_d, &buf, 1)) > 0)
	{
		if (i == 4)
		{
			i - 0;
			line++;
		}
		if (line == 3 && i == 4)
		{
			line = 0;
			i = 0;
		}
		if (num_p == nb_piece - 1)
			return ;
		if (buf != '\0' || buf != '\n')
		{
			if (buf == '#')
				my_piece[num_p]->piece[line][i++] = 1;
		}
	}
	close(file_d);
}
