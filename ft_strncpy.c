#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*str;

	str = dest;
	while (*src && n--)
		*str++ = *src++;
	if (n--)
		*str++ = '\0';
	return (dest);
}
