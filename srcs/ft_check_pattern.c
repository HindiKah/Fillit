#include "fillit.h"

int		ft_check_pattern(char **pattern)
{
	int i;
	int j;
	int res;

	i = 0;
	while (pattern[i])
	{
		j = 0;
		if (pattern[i][j])
		{
			if(pattern[i][j] == '#' && 
					((pattern[i][j + 1] && pattern[i][j + 1] == '#') || 
					(pattern[i + 1][j] && pattern[i + 1][j] == '#'))
				res++;
			if(pattern[i][j] == '#' && i != 0 && j != 0 &&
					((pattern[i][j - 1] == '#' )
					 || pattern[i - 1][j]))
				res ++;
			if (pattern[i][j + 1] == '#')
				j++;
		}
		i++;
	}
	if (res == 6 || res == 8)
		return (1);
	return (0);
}
