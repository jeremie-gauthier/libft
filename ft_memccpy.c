#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = (char*)dest;
	psrc = (const char*)src;
	while (*psrc != c && n--)
		*pdest++ = *psrc++;
	if (*psrc == c)
	{
		*pdest++ = c;
		return (pdest);
	}
	return (NULL);
}
