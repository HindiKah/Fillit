#include "fillit.h"

char	**ft_init_map(int size)
{
	char	**ret;
	int		i;
	int		j;

	i = 0;
	ret = (char**)malloc(sizeof(char*) * (size + 1));
	while (i < size)
	{
		j = 0;
		ret[i] = (char*)malloc(sizeof(char) * (size + 1));
		while (ret[i][j])
			ret[i][j++] = '.';
		ret[i][j] = '\0';
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
