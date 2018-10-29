#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size)
	{
		while (size-- > 1 && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (len);
}
