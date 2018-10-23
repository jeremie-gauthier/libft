#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;

	p = s;
	while (*p && n--)
	{
		if (*p == c)
			return ((char*) p);
		p++;
	}
	return (NULL);
}
