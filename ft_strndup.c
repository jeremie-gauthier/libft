#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*sdup;
	size_t	len;

	len = n;
	if (!(sdup = (char*)malloc(sizeof(*sdup) * (n + 1))))
		return (NULL);
	while (*s && n--)
		*sdup++ = *s++;
	*sdup = '\0';
	return (sdup - len);
}
