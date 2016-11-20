#include "fillit.h"

int		ft_check_patterna(char **pattern)
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
			if (i < ft_sstrlen(pattern) - 1)
			{
				if (pattern[i][j] != '.' && pattern[i + 1][j] != '.')
					res++;
			}
			if ((size_t)j < ft_strlen(pattern[i]))
			{
				if (pattern[i][j] != '.' && pattern[i][j + 1] != '.' &&
				pattern[i][j + 1] != '\0')
					res++;
			}
			j++;
		}
		i++;
	}
	return (res);
}
