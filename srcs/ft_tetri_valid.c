/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:45:03 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/15 12:51:57 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_fchar(char *file)
{
	char	buf;
	int		file_d;
	int		ret;
	char	tmp;
	int		i;

	i = 0;
	tmp = '.';
	file_d = open(file, O_RDONLY);
	while ((ret = read(file_d, &buf, 1)) > 0)
	{
		if (buf != '.' && buf != '#')
			return (0);
		if (i == 4 && buf != '\n')
			return (0);
		if (buf == '\n' && tmp == '\n' && i == 4)
			i = 0;
		else return (0);
	}
