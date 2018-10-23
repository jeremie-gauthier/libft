#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*str;

	str = dest;
	while (*src && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	if (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (str);
}
