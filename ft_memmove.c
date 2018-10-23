#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*buf;
	char 		*dest;
	const char	*src;
	size_t		size;

	size = n;
	dest = (char*) s1;
	src = (char*) s2;
	if (!(buf = (char*)malloc(sizeof(*buf) * (n + 1))))
		return (NULL);
	while (n-- > 0)
		*buf++ = *src++;
	*buf = '\0';
	buf -= size;
	while (*buf)
		*dest++ = *buf++;
	free(buf - size);
	buf = NULL;
	return (dest);
}
