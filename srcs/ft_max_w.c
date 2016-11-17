/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_w.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:41:06 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/17 15:45:25 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_max_w(char **piece)
{
	int		i;
	int		j;
	int		max_w;

	i = 3;
	j = 3;
	while ((i != 0 && j != 0) || piece[i][j] == '#')
	{
		if (j == 0)
		{
			i--;
			j = 3;
		}
		j--;
	}
	max_w = j;
	return (max_w);
}
