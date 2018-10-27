#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*str;

	str = dest;
	while (*src && n > 0)
	{
		*str++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*str++ = '\0';
		n--;
	}
	return (dest);
}
