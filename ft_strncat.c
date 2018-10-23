#include <stdlib.h>

char *ft_strncat(char *dest, const char *src, size_t n)
{
	char	*iter;

	iter = dest;
	while (*iter)
		iter++;
	while (n-- > 0 && *src)
	{
		*iter = *src;
		iter++;
		src++;
	}
	*iter = '\0';
	return (dest);
}
