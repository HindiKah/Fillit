#include "fillit.h"

int		ft_check_pattern(char **pattern)
{
	if ((ft_check_patterna(pattern) + ft_check_patternb(pattern)) == 6 
	|| (ft_check_patterna(pattern) + ft_check_patternb(pattern)) == 8)
		return (1);
	return (0);
}
