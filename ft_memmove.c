#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*buf;
	char 		*dest;
	const char	*src;
	size_t		i;
	
	i = 0;
	dest = (char*) s1;
	src = (const char*) s2;
	if (!(buf = (char*)malloc(sizeof(*buf) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		buf[i] = src[i];
		i++;
	}
	buf[i] = '\0';
	i = 0;
	while (i < n)
	{
		dest[i] = buf[i];
		i++;
	}
	ft_strdel(&buf);
	return (s1);
}
