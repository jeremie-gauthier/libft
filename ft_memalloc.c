#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*block;

	if (!(block = (void*)malloc(sizeof(*block) * size)))
		return (NULL);
	ft_bzero(block, size);
	return (block);
}
