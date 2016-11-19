/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:48:47 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/19 17:29:45 by ybenoit          ###   ########.fr       */
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
# include "libft.h"
typedef struct	s_piece
{
	int					height;
	int					width;
	char				**pattern;
	char				value;
	struct s_piece		*next;
}				t_piece;

int		ft_sstrlen(char **sstr);
char	**ft_resize(char **piece);
char	**ft_make_ctab(char *piece);
char	**ft_strpieces(char *file, char **pieces);
int		ft_countpieces(char *file);
int		ft_isvalid(char **pieces);
int		ft_height_begin(char **piece);
int		ft_height_end(char **piece);
int		ft_width_begin(char **piece);
int		ft_width_end(char **piece);
char	*ft_make_str(char ** piece, char **pnr);
char	***ft_put_rpieces(char *file);
#endif
