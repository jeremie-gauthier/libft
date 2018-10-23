#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	while (*psrc && *psrc != c && n-- > 0)
		*pdest++ = *psrc++;
	*pdest = c;
	return (dest);
}
