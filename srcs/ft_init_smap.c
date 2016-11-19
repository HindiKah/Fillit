#include "fillit.h"

t_map	*ft_init_smap(int size)
{
	t_map	*mymap;

	mymap = (t_map*)malloc(sizeof(t_map));
	if (!mymap)
		return (NULL);
	mymap->size = size;
	mymap->map = ft_init_map(mymap->map, size);
	return (mymap);
	}
