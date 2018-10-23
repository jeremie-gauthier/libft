#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*block;

	if (!(block = (void*)malloc(sizeof(*block) * size)))
		return (0);
	block = NULL;
	return (block);
}
