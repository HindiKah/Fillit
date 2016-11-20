#include "fillit.h"

int		ft_check_patternb(char **pattern)
{
	int i;
	int j;
	int res;

	i = 0;
	res = 0;
	while (pattern[i])
	{
		j = 0;
		while (pattern[i][j])
		{
			if (i != 0)
			{
				if (pattern[i][j] != '.' && pattern[i][j ] != '\0'
				&& pattern[i - 1][j] != '.')
					res++;
			}
			if (j > 0)
			{
				if (pattern[i][j] != '.' && pattern[i][j] != '\0'
				&& pattern[i][j - 1] != '.')
					res++;
			}
			j++;
		}
		i++;
	}
	return (res);
}
