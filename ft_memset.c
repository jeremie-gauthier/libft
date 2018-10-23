#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;

	p = (char*) str;
	while (n-- > 0)
		*p++ = c;
	return (str);
}
