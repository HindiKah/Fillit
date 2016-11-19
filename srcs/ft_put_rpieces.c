/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_rpieces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:15:02 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/19 17:50:50 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***ft_put_rpieces(char *file)
{
	int i;
	char **tmp_piece;
	char **piece1;
	char ***ret;

	i = 0;
	ret =(char***)malloc(sizeof(char**) * (ft_countpieces(file) + 1));
	if (!ret)
		return NULL;
	while (i < ft_countpieces(file))
	{
		tmp_piece = ft_strpieces(file, tmp_piece);
		piece1 = ft_make_ctab(tmp_piece[i]);
		ret[i++] = ft_resize(piece1);
	}
	ret[i] = NULL;
	ft_convert_letter(ret);
	return (ret);
}