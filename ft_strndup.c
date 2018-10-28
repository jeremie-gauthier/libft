#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*sdup;
	size_t	i;

	i = 0;
	if (!(sdup = (char*)malloc(sizeof(*sdup) * (n + 1))))
		return (NULL);
	while (s[i] && i < n)
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
