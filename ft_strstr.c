#include "libft.h"
#include <stdlib.h>

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;

	len = ft_strlen(s2);
	if (!*s2)
		return ((char*) s1);
	while (*s1)
	{
		if (*s1 == *s2)
			if (!ft_strncmp(s1, s2, len))
				return ((char*) s1);
		s1++;
	}
	return (0);
}
