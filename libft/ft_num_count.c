/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:35:32 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/11 22:41:45 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_num_count(unsigned int n)
{
	unsigned int	i;
	int				pw;

	pw = 1;
	i = n;
	while (i >= 10)
	{
		i /= 10;
		pw++;
	}
	return (pw);
}