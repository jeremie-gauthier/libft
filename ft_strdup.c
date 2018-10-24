#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	size_t	len;

	len = ft_strlen(s);
	if (!(sdup = (char*)malloc(sizeof(*sdup) * (len + 1))))
		return (0);
	while (*s)
	{
		*sdup = *s;
		s++;
		sdup++;
	}
	*sdup = '\0';
	return (sdup - len);
}
