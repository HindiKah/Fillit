/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:48:47 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/17 14:52:31 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H_
# define _FILLIT_H_

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>

/*typedef struct	s_piece
{
	int			height;
	int			width;
	int			*blank;
	char		value;
	s_piece		*next;
}				t_piece;
*/
char	**ft_make_ctab(char *piece);
char	**ft_strpieces(char *file, char **pieces);
int		ft_countpieces(char *file);
int		ft_isvalid(char **pieces);
#endif
