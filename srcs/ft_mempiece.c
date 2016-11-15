/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduc_tpieces.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 12:10:15 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/15 12:14:13 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_piece		*ft_mempiece(int nb_piece)
{
	t_piece *my_piece;

	my_piece = (t_piece*)malloc(sizeof(t_piece) * nb_piece);
	if (my_piece == NULL)
		return (NULL);
	return (my_piece);
}
