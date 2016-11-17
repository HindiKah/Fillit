/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_begin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:24:08 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/17 16:27:54 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_width_begin(char **piece)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (piece[i][j] != '#')
	{
		i++;
		if (i == 4)
		{
			j++;
			i = 0;
		}
	}
	return (j);
}
