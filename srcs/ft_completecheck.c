/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_completecheck.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:48:35 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/22 18:08:08 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_completecheck(char *file, char ***all_rpieces)
{
	int i;
	int ret;

	ret = 1;
	i = 0;
	while (all_rpieces[i])
		ret *= ft_check_pattern(all_rpieces[i++]);
	if (ft_countpieces(file) > 26 || ft_countpieces(file) < 1)
		return (0);
	return (ret);
}
